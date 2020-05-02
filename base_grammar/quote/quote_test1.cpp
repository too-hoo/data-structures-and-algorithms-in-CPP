//
// Created by toohoo on 2/5/2020.
//
#include <iostream>

using namespace std;

int my_quote_test1(){
    // 声明简单的变量
    int i;
    double d;

    // 声明引用变量
    // 第一个声明可以读作“r是一个初始化为i的整形引用”， 第二个声明可以读作“s是一个初始化为d的double型引用”
    int& r = i;
    double& s = d;

    i = 5;
    cout << "Value of i:" << i << endl;
    cout << "Value of i reference:" << r << endl;

    d = 11.7;
    cout << "Value of d:" << d << endl;
    cout << "Value of d reference:" << s << endl;
    return 0;
}

