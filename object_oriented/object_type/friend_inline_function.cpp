//
// Created by toohoo on 2/5/2020.
//
#include <iostream>

using namespace std;

class Box4{
    double width;
public:
    friend void printWidth(Box4 box4);
    void setWidth(double wid);
};

// 成员函数定义
void Box4::setWidth(double wid) {
    width = wid;
}

// 请注意：printWidth() 不是任何类的成员函数
void printWidth(Box4 box4){
    // 因为printWidth()是Box的友元，它可以直接访问该类的任何成员
    cout << "Width of box:" << box4.width << endl;
}

// 内联函数
inline int Max(int x, int y){
    return (x > y) ? x:y;
}

int my_box5(){
    Box4 box4;

    // 使用成员函数设置宽度
    box4.setWidth(10.0);
    // 使用友元函数输出宽度
    printWidth(box4);

    // 调用内联函数
    cout << "Max (20, 10):" << Max(20, 10) << endl;
    cout << "Max (0, 200):" << Max(0, 200) << endl;
    cout << "Max (100, 1010):" << Max(100, 1010) << endl;

    return 0;
}