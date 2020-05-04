//
// Created by toohoo on 4/5/2020.
//
// SIGABRT :  程序的异常终止，如调用abort
// SIGFPE :  错误的算术运算，比如除以零或者导致溢出的操作
// SIGILL ： 检测非法指令
// SIGINT ： 接收到交互注意信号
// SIGSEGV ： 非法访问内存
// SIGTERM ： 发送到程序的终止请求
// signal()函数： C++信号处理库提供了signal函数，用来捕获突发事件
// void (*signal (int sig, void (*func)(int)))(int)
// 这个函数接收两个参数：第一个参数是一个整数，代表了信号的编号；第二个参数是一个指向信号处理函数的指针
// ->使用signal()函数捕获SIGINT信号，不管我们想要在程序中捕获什么信号，都必须使用signal函数来注册信号，并将其与信号处理程序相关联
#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum){
    cout << "Interrupt signal ("<< signum <<") received.\n";

    // 清理并关闭
    // 终止程序
    exit(signum);
}

int my_signal1(){
    // 注册信号SIGINT和信号处理程序
    signal(SIGINT, signalHandler);

    while(1){
        cout << "Going to sleep...." << endl;
        sleep(1);
    }
    return 0;
}

/*
int main ()
{
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);

    while(1){
        cout << "Going to sleep...." << endl;
        sleep(1);
    }

    return 0;
}
*/
