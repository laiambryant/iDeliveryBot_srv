const m_send_msg = require("../Monitor/m_send_msg");
module.exports = function timeout_handler(socket, type, data, monitor_socket){
    console.log('\x1b[36m%s\x1b[0m',"Timeout Request incoming:");
    m_send_msg(data, type, monitor_socket);
};