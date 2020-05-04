//
// Created by toohoo on 4/5/2020.
//
// 我们可以使用函数raise()生成信号，该函数带有一个整数信号编号作为参数
// int raise(signal sig);
// 在这里，sig是要发送的信号的编号，这些信号包括：SIGINT， SIGABRT， SIGFPE， SIGILL， SIGSEGV， SIGTERM， SIGHUP。
#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler2(int signum){
    cout << "Interrupt signal (" << signum <<") received.\n";

    // 清理并关闭
    // 终止程序
    exit(signum);
}

int my_signal2(){
    int i = 0;
    // 注册信号SIGINT 和信号处理程序
    signal(SIGINT, signalHandler2);

    while(++i){
        cout << "Go to sleep...." << endl;
        if(i == 3){
            raise(SIGINT);
        }
        sleep(1);
    }
    return 0;
}
