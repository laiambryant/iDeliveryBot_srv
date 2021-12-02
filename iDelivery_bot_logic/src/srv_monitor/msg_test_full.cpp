#include "srv_monitor.h"
#include "message_creator.h"
int main(int argc, char const *argv[]){

    req_parser parser;

    srv_monitor monitor = srv_monitor();
    string login_str = monitor.get_last_msg();
    
    msg_type type = parser.get_msg_type(login_str);
    string body = parser.get_msg_body(login_str);
    int req_no = parser.get_req_no(login_str);
    
    req login_request = req(req_no, body, type, parser.cvt_msg_type_toString(type));
    login_request.print_metadata(cerr);

    return 0;
}
