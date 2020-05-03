//
// Created by toohoo on 2/5/2020.
//
#include <iostream>
using namespace std;

class Box{
protected:
    double width;
};

class SmallBox:Box{  //注意：这里使用单：，SmallBox是派生类
public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

// 子类的成员函数
double SmallBox::getSmallWidth(void) {
    return width;
}

void SmallBox::setSmallWidth(double wid) {
    width = wid;
}

// main函数
int my_box4(){
    SmallBox box;
    // 使用成员函数设置宽度
    box.setSmallWidth(5.0);
    cout << "width of box:" << box.getSmallWidth() << endl;
    return 0;
}