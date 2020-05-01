//
// Created by toohoo on 1/5/2020.
//
/*
int a1[3][4]{
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
};
// 等同
int a2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
// 访问
int val = a3[2][3];
*/
#include <iostream>
using namespace std;
int two_d_array_test(){
    // 一个带有5行2列的数组
    int a[5][2] = {{0,0}, {1,2},{2,4},{3,6},{4,8}};

    // 输出数组中的每一个元素的值
    for (int i=0; i < 5; i++)
        for (int j=0; j<2; j++){
            cout << "a["<< i << "]["<< j << "]:";
            cout << a[i][j] << endl;
        }
    return 0;
}
