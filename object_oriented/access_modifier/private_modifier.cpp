//
// Created by toohoo on 2/5/2020.
//
// 如果没有任何的访问修饰符，类的成员假定为私有的
// 实际操作中，一般会在私有的的区域定义数据，在共有的区域中定义相关函数，以便在类的外部也可以调用这些函数
#include <iostream>
using namespace std;

class Box{
public:
    double length;
    void setWidth(double wid);
    double getWidth(void);

private:
    double width;
};

// 成员函数定义
double Box::getWidth(void) {
    return width;
}

void Box::setWidth(double wid) {
    width = wid;
}

// main
int my_box3(){
    Box box;

    // 不使用成员函数设置长度
    box.length = 10.0;  //OK; 因为length是公有的
    cout << "Length of box:" << box.length << endl;

    // 不使用成员函数设置宽度
    // box.width = 10.0  // Error: 因为 width 是私有的
    box.setWidth(10.0);  //使用成员函数设置宽度
    cout << "Width of box:" << box.getWidth() << endl;
    return 0;
}
