//
// Created by toohoo on 2/5/2020.
//
#include <iostream>
using namespace std;

int my_pointer1(){
    int var1;
    char var2[10];

    cout << "var1 变量的地址：" ;
    cout << &var1 << endl;

    cout << "var2 变量的地址：";
    cout << &var2 << endl;

    return 0;
}
