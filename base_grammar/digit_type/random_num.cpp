//
// Created by toohoo on 1/5/2020.
//
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int my_random_digit(){
    int i, j;
    // 设置随机数的种子
    srand((unsigned)time(NULL));

    // 生成10个随机数
    for (i=0; i<10;i++){
        //生成实际的随机数
        j=rand();
        cout << "随机数：" << j << endl;
    }
    return 0;
}