var user = require("../schemas/user")
const mocha = require("mocha")
const mongoose = require("mongoose")
describe("User creation",function(){
    it("Creates three users in mongoDB",function(done){
        mongoose.connect("mongodb://localhost:27017/users").then(()=>{   
        }).then(function(){
            var user1 = new user({
                id:0,
                username:"adamkadmon",
                password:"illuminati_666",
                x_pos:400,
                y_pos:100
            });     user1.save();
            var user2 = new user({
                id:1,
                username:"FrancescoTotti",
                password:"forzamagica_Werpupone",
                x_pos:1600,
                y_pos:100
            });      user2.save()

            var user3 = new user({
                id:2,
                username:"dr_lecter",
                password:"willgraham123",
                x_pos:1200,
                y_pos:700
            });     user3.save()   
        });     done()
    })
})