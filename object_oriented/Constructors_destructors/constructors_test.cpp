//
// Created by toohoo on 2/5/2020.
//
#include <iostream>
using namespace std;

class Line1{
public:
    void setLength(double len);
    double getLength(void);
    Line1();  // 这是构造函数
private:
    double length;
};

// 成员函数定义，包括构造函数
Line1::Line1(void){
    cout << "Object is being created" << endl;
}

void Line1::setLength(double len) {
    length = len;
}

double Line1::getLength() {
    return length;
}

// main
int my_line2(){
    Line1 line;

    // 设置长度
    line.setLength(6.0);
    cout << "Length of line:" << line.getLength() << endl;
    return 0;
}