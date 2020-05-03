//
// Created by toohoo on 3/5/2020.
//
// 假设我们需要一个字符数组（一个有20个字符的字符串）分配内存，可以使用数组动态分配内存的语法来进行内存分配。
// char* pvalue = NULL; // 初始化为NULL的指针
// pvalue = new char[20]; // 为变量请求内存

// 如果需要删除创建的数组，可以使用delete函数进行
// delete [] pvalue;  // 删除pvalue指向的数组

// 一维数组：
// 动态分配，数组的长度为m
// int *array = new int [m];

// 释放内存
// delete [] array;

// 二维数组
// int **array
// 假定数组第一维长度为m，第二维长度为n
// 动态分配空间
// array = new int *[m];
// for (int i=0; i<m; i++){
//     array[i] = new int[n];
// }
// 释放
// for(int i=0; i<m; i++){
//     delete [] arrary[i];
// }
// delete [] array;

// 二维数组实例测试
#include <iostream>
using namespace std;

int two_d_array_alloc(){
    int **p;
    int i, j;  //p[4][8]
    // 开始分配4行8列的二维数据
    p = new int *[4];
    for(i=0; i<4; i++){
        p[i] = new int [8];
    }
    for(i=0;i<4;i++){
        for(j=0; j<8; j++){  // 当打印出来的时候会发现第一行和列的数值都是0，因为第一个值都是0乘
            p[i][j] = j*i;
        }
    }
    // 打印数据
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            if(j==0) cout << endl;  // 当j为0的时候，换行（会发现第一行之前是会有一行空出来的）
            cout << p[i][j]<<"\t";
        }
    }
    // 开始释放申请的堆
    for(i=0; i<4; i++){
        delete [] p[i];
    }
    delete [] p;  // 指明删除的是数组类型的
    return 0;
}
