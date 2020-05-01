//
// Created by toohoo on 1/5/2020.
//
//double balance1[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
// double balance2[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
// balance1[4] = 50.0;  // 给数组的第五个位置进行赋值
#include <iostream>
using namespace std;

# include <iomanip>
using std::setw;  // 使用setw()函数来格式化输出

int array_test(){
    int n[10];  // n是一个包含10个整数的数组

    // 初始化数组的元素
    for (int i=0; i<10; i++){
        n[i] = i + 100; // 设置元素i为ℹ + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;

    // 输出数组中的每个元素的值
    for (int j = 0; j < 10; j++){
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    return 0;
}
