//
// Created by toohoo on 3/5/2020.
//
// using 指令也可以用来指定命名空间中的特定项目。例如：如果只是打算使用std命名空间中的count部分
#include <iostream>
using std::cout;

int my_namespace3(){
    cout <<"std::endl is used with std!" << std::endl;
    return 0;
}