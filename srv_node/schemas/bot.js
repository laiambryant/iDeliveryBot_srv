const mongoose = require("mongoose")
const schema = mongoose.Schema

const botSchema = new schema({
    id:Number,
    x_pos:Number,
    y_pos:Number
})

const Bot = mongoose.model("bot", botSchema)

module.exports = Bot

