//
// Created by toohoo on 4/5/2020.
//
// 使用pthread_create()函数创建了5个线程，并接收传入的参数。每个线程打印出"Hello TooHoo"消息，并输出接收参数，
// 然后调用pthread_exit()终止线程
#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;
#define NUM_THREAD 5

/*
void *PrintHello(void *threadid){
    // 对传入的参数进行强制的类型转换，由无类型指针变成整形数指针，然后再读取
    int tid = *((int*) threadid);
    cout << "Hello TooHoo! 线程ID，" << tid << endl;
    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_THREAD];
    int indexes[NUM_THREAD];  // 用数组来保存i的值
    int rc;
    int i;
    for(i=0;i < NUM_THREAD; i++){
        cout << "main(): 创建线程，" << i << endl;
        indexes[i] = i;  //先保存i的值
        // 传入的时候必须强制转换成为void*类型，即无类型指针
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&(indexes[i]));
        if (rc){
            cout << "Error:无法创建线程，" << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
*/
