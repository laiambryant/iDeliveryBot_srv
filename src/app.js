const conn_handler = require("./requests");
const express = require('express');
const Connection_handler = require("./requests");

const app = express();
const http = require('http').Server(app);
const io = require('socket.io')(http);
const port = process.env.PORT || 8080;

app.use(express.static(__dirname));

io.sockets.on('connection', conn_handler.Connection_handler());

http.listen(port, () => {
    console.log('listening on port ' + port)
});
