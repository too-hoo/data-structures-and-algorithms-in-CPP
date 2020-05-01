//
// Created by toohoo on 1/5/2020.
//
#include <iostream>
using namespace std;

// 此程序演示了有符号整数和无符号整数之间的差别

int my_modifier_type(){
    short int i;  // 有符号短整数
    short unsigned int j;  // 无符号短整数

    j = 50000;

    i = j;
    cout << i << " " << j << endl;
    return 0;
}