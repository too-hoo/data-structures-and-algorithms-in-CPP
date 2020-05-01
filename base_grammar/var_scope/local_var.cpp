//
// Created by toohoo on 1/5/2020.
//
# include <iostream>
using namespace std;

int my_local_var(){
    // 局部变量
    int a, b;
    int c;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl;
    return c;
}

