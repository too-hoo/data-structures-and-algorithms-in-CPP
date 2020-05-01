//
// Created by toohoo on 1/5/2020.
//
// char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
// 等同于(C风格字符串)
// char greeting2[] = "Hello";

#include <iostream>
using namespace std;

int out_put_string(){
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "Greeting message:";
    cout << greeting << endl;
    return 0;
}


