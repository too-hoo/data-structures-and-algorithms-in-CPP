//
// Created by toohoo on 2/5/2020.
//
#include <iostream>

using namespace std;

class Line3{
public:
    void setLength(double len);
    double getLength(void);
    Line3();  // 这是构造函数声明
    ~Line3(); // 这是析构函数声明
private:
    double length;
};

// 成员函数定义，包括构造函数
Line3::Line3(void){
    cout << "Object is being created" << endl;
}
Line3::~Line3() {
    cout << "Object is being deleted" << endl;
}

void Line3::setLength(double len) {
    length = len;
}

double Line3::getLength(void) {
    return length;
}

// main
int my_line4(){
    Line3 line;

    // 设置长度
    line.setLength(6.0);
    cout << "Length of line:" << line.getLength() << endl;
    return 0;
};
