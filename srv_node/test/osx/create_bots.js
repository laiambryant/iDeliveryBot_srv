var Bot = require("../../schemas/bot")
const mocha = require("mocha")
const mongoose = require("mongoose")

describe("Bot creation",function(){
    it("Creates two bots in mongoDB",function(done){
        mongoose.connect("mongodb://localhost:27017/users").then(function(){
            var bot = new Bot({
                id:1,
                x_pos:-4,
                y_pos:-13
            });     bot.save();
        });     done()
    })
})