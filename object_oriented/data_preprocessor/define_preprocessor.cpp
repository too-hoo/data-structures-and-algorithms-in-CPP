//
// Created by toohoo on 3/5/2020.
//
// #define 预处理指令用于创建符号常量。该符号常量通常会被称为宏，指令格式：
// #define macro-name replacement-text
//当这一行代码出现在一个文件中的时候，在该文件中后续出现的所有宏都将会在编译之前被替换成为replacement-text

#include <iostream>
using namespace std;

#define PI 3.14159  // 常量宏
#define MIN(a,b)(a<b?a:b)

int my_preprocessor1()
{
    // 编译前会被替换
    cout << "Value of PI :" << PI << endl;

    int i,j;
    i = 100;
    j = 30;
    cout << "较小的值为："<< MIN(i,j) << endl;
    return 0;
}


