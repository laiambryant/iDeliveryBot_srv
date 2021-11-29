#include <iostream>
#include <fstream>

#include "message_creator.h"

#define LOG_PATH "products/log.txt"
#define OUT_PATH ""
#define IN_PATH ""
#define MSG_MAX_SIZE 500

using namespace std;

enum out_mode{
    cerr_out, cout_out, log_out
};

//Monitor creates two streams: one to read one to write
class srv_monitor{

private:
    ofstream out_stream_;
    ifstream in_stream_;
    string msg_buf_;
    message_creator msg_factory;

    void clear_msg_buff();
     
public:
    srv_monitor();
    ~srv_monitor();
    srv_monitor(const srv_monitor &other);
    bool write_to_fstream(string msg); //bool write_to_sock(char* msg); 
    bool read_from_fstream(); //bool read_from_sock();
    string get_last_msg();  //gets last msg from input_stream
    void monitor_metadata(out_mode out_mode_);

};