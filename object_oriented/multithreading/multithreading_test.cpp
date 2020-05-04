//
// Created by toohoo on 4/5/2020.
//
// 多线程程序包含可以同时运行的两个或者多个部分，这样的程序中的每一个部分被称为是一个线程，每个线程定义了一个单独的执行路径
// 1->创建一个POSIX线程
// #include <pthread.h>
// pthread_create (thread, attr, start_routine, arg)
// 在这里，pthread_create 创建一个新的线程，并让它可以执行。
// thread  : 指向线程标识符指针
// attr :  一个不透明的属性对象， 可以被用来设置线程的属性。可以指定线程的属性对象，也可以使用默认值NULL。
// start_routine:  线程运行函数起始地址，一旦线程被创建就会执行
// arg ： 运行函数的参数。它必须通过把引用作为指针强制转换为void类型进行传递。如果没有传递参数，则使用NULL。
// 创建线程成功的时候，函数返回0， 若返回值不为0则说明创建线程失败
// 2->终止线程
// #include <pthread.h>
// pthread_exit (status);
// 在这里，pthread_exit 用于显式地推出一个线程。通常情况下，pthread_exit()函数是在线程完成工作之后无需继续存在的时候被调用。
// 如果main()是在它所创建的线程之前结束，并通过pthread_exit() 推出，那么其他线程将继续执行。否则，他们将在main()结束的时候自动被终止。
#include <iostream>
// 必须包含的头文件
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

//线程的运行函数
void* say_hello(void* args){
    cout << "Hello TooHoo!" << endl;
    return 0;
}

// 注意：
// 已经在c文件中包含了线程的头文件<pthread.h>，可是编译的时候却报错“对pthread_create未定义的引用“，
// 原来时因为pthread库不是Linux系统默认的库，连接时需要使用库libpthread.a,所以在使用pthread_create创建线程时，
// 在编译中要加-lpthread参数:gcc createThread.c -lpthread -o createThread. 加上这个以后编译成功！
// g++ multithreading_test.cpp -lpthread -o multithreading_test^C

/*
int my_multithreading(){
    // 定义线程的id变量， 多个变量的使用的数组
    pthread_t tids[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; ++i){
        // 参数依次是：创建的线程id，线程参数， 调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if(ret != 0){  // 返回值不为0的时候就是创建失败
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    //等各个线程推出之后，进程才结束，否则进程强制结束，线程可能还没有反应过来；
    pthread_exit(NULL);
    return 0;
}
*/

//int main(){
//    my_multithreading();
//    return 0;
//}




