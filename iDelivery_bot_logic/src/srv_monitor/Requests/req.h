#include <iostream>
#include <fstream>

#include "req_parser.h"
#include "Body/body_types.h"
using namespace std;



class req{
private:
    int _req_no;
    string _req_body;
    msg_type _req_type;
    string _req_type_str;

public:
    req(int req_no_, string req_body_, msg_type req_type_, string req_type_str_):
        _req_no(req_no_), _req_body(req_body_), 
        _req_type(req_type_), _req_type_str(req_type_str_){}
    void print_metadata(ostream &stream);
};

