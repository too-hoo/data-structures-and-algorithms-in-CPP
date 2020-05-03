//
// Created by toohoo on 3/5/2020.
//
// #ifdef NULL  //有选择地对部分源码进行编译
//     #define NULL 0
// #endif
// 您可以只在调试时进行编译，调试开关可以使用一个宏来实现
// #ifdef DEBUG
//     cerr << "Variable x=" << x << endl;
// #endif
// 如果在指令 #ifdef DEBUG 之前已经定义了符号常量 DEBUG，则会对程序中的 cerr 语句进行编译。您可以使用 #if 0 语句注释掉程序的一部分1
// #if 0
//      不进行编译的代码
// #endif
#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) (((a)<(b))? a:b)

int my_condition_compilation1(){
    int i,j;
    i = 100;
    j = 30;
#ifdef DEBUG
    cerr << "Trace: Inside my_condition_compilation1 function" << endl;
#endif
#if 0
    /*这是注释部分*/
    cout << MKSTR(HELLO C++) << endl;
#endif
    cout << "The minimum is " << MIN(i, j) << endl;
#ifdef DEBUG
    cerr << "Trace:Coming out of my_condition_compilation1 function" << endl;
#endif
    return 0;
}
