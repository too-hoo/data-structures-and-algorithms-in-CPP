//
// Created by toohoo on 4/5/2020.
//
// 可以使用以下两个函数来连接或者分离线程
// pthread_join (threadid, status)
// pthread_detach (threadid)
// pthread_join()子程序阻碍调用程序，直到指定的threadid线程终止为止。当创建一个线程的时候，它的某个属性会定义它是否是可连接的（joinable）或者
// 可分离的（detached）。只有创建时定义为可连接的线程才可以被连接。如果线程在创建的时候被定义为是可分离的，则它永远也不能被连接。
// ->使用pthread_join()函数来等待线程的完成。
#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5
/*
void *wait(void *t){
    int i;
    long tid;
    tid = (long)t;
    sleep(1);
    cout << "Sleeping in thread " << endl;
    cout << "Thread with id :" << tid << " ...exiting" << endl;
    pthread_exit(NULL);
}

int main(){
    int rc;
    int i;
    pthread_t threads[NUM_THREADS];
    pthread_attr_t attr;
    void *status;

    // 初始化并设置线程为可连接的（joinable）
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);  // 可被连接的
    for(i=0; i < NUM_THREADS; i++){
        cout << "main(): creating thread, " << i << endl;
        rc = pthread_create(&threads[i], NULL, wait, (void *)&i );
        if(rc){
            cout << "Error: unable to create thread," << rc << endl;
            exit(-1);
        }
    }

    // 删除属性，并等待其他线程
    pthread_attr_destroy(&attr);
    for(i=0; i < NUM_THREADS; i++){
        rc = pthread_join(threads[i], &status);
        if(rc){
            cout << "Error:unable to join," << rc << endl;
            exit(-1);
        }
        cout << "Main: completed thread id :" << i;
        cout << " exiting with status :" << status << endl;
    }
    cout << "Main: program exiting." << endl;
    pthread_exit(NULL);
}
*/