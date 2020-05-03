//
// Created by toohoo on 3/5/2020.
//
// int ***array
// 假定数组的第一维度为m, 第二维度是n， 第三维度是h
// 动态分配空间
/*
array = new int **[m]; //分配一维
for (int i=0; i<m; i++){
    array[i] = new int *[n];  // 分配二维
    for(int j=0; j<n; j++){
        array[i][j] = new int[h]; // 分配三维
    }
}
// 释放
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        delete[] array[i][j];
    }
    delete[] array[i];
}
delete[] array;
*/
#include <iostream>
using namespace std;

int three_d_array_malloc(){
    int i, j, k;  // p[2][3][4]

    int ***p;
    p = new int **[2];  // 分配一维
    for(i=0; i<2; i++){
        p[i] = new int *[3];  // 分配二维
        for(j=0; j<3; j++)
            p[i][j] = new int[4]; // 分配三维
    }
    // 输出p[i][j][k] 三维数组
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<4; k++){
                p[i][j][k] = i+j+k;
                cout << p[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;  // 换行输出三维数据（可以理解为堆叠在一起）
    }
    // 释放内存:释放二维
    for(i=0;i<2;i++){
        for(j=0; j<3; j++){
            delete [] p[i][j];  //释放三维
        }
    }
    for(i=0; i<2; i++){
        delete [] p[i];  // 释放二维
    }
    delete [] p;  // 释放一维
    return 0;
}
