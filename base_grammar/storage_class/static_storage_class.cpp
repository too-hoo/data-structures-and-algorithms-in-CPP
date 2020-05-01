//
// Created by toohoo on 1/5/2020.
//
#include <iostream>
using namespace std;

// 函数声明
void my_func(void);

static int count = 10;  // 全局变量

int my_static_storage_class(){
    while (count--){
        my_func();
    }
    return 0;
}

// 函数定义
void my_func(void){
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "变量i为" << i;
    std::cout << ", 变量count 为" << count << std::endl;
}