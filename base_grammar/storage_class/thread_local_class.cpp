//
// Created by toohoo on 1/5/2020.
//
#include <iostream>
#include <vector>

using namespace std;

thread_local int x;  // 命名空间下的全局变量
class X{
    static thread_local std::string s;  // 类的static成员变量
};
// static thread_local std::string X::s;  // X::s是需要定义的
thread_local std::string X::s;  // X::s是需要定义的

void foo(){
    thread_local std::vector<int> v; // 本地变量
}
