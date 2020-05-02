//
// Created by toohoo on 2/5/2020.
//
#include <iostream>
using namespace std;

int standard_err1(){
    char str[] = "Unable to read......";

    cerr << "Error message:" << str << endl;
    clog << "Error message:" << str << endl;
    return 0;
}
