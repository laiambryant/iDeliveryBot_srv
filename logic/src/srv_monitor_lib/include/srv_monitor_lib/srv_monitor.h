#pragma once
#include <iostream>
#include <fstream>
#include <ros/ros.h>

#include "Client.h"
#include "message_creator.h"
#include "body_types.h"

#ifndef LOG_PATH
#define LOG_PATH "products/log.txt"
#endif
#define OUT_PATH "products/out.txt"
#define IN_PATH "products/in.txt"

#define MSG_MAX_SIZE 500

using namespace std;
//Monitor creates two streams: one to read one to write
class srv_monitor{

private:
    Client _srv_comm;
    string msg_buf_;
    message_creator msg_factory;
    bool _r_OR_w; //bool to check if someone is reading on or writing from monitor

//FUNCS--------------------------------------------------------------------------------------------------

    void clear_msg_buff();
     
public:
//CTORS--------------------------------------------------------------------------------------------------

    //Default ctor
    srv_monitor();
    srv_monitor(int port);
    //Copy ctor
    srv_monitor(const srv_monitor &other);

    string get_msg();  //gets last msg from input_stream
    bool is_r_OR_w(){return _r_OR_w;};

//FUNCS--------------------------------------------------------------------------------------------------

    //Sends message on socket
    void send_msg(string msg, msg_type type); 
    //Prints metadata on stream
    void monitor_metadata(ostream &stream);

};
