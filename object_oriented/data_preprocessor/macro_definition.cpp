//
// Created by toohoo on 4/5/2020.
//
// 预定以宏
// __LINE__  : 这会在程序编译的时候包含当前的行号
// __FILE__  : 这会在程序编译的时候包含当前文件名
// __DATE__  ：这会包含一个形式month/day/year的字符串， 它表示把源文件转换成为目标代码的日期
// __TIME__  : 这会包含一个形式为hour:minute:second的字符串，它表示程序被编译的时间
#include <iostream>
using namespace std;

int my_macro1(){
    cout << "Value of __LINE__: " << __LINE__ << endl;
    cout << "Value of __FILE__: " << __FILE__ << endl;
    cout << "Value of __DATE__: " << __DATE__ << endl;
    cout << "Value of __TIME__: " << __TIME__ << endl;
    return 0;
}

