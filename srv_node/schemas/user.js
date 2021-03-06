const mongoose = require("mongoose")
const schema = mongoose.Schema

const userSchema = new schema({
    id:Number,
    username:String,
    password:String,
    x_pos:Number,
    y_pos:Number,
    logged_in:Boolean
})

const User = mongoose.model("user", userSchema)

module.exports = User

