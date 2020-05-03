//
// Created by toohoo on 2/5/2020.
//

#include <iostream>

using namespace std;

class Box5
{
public:
    // 构造函数定义
    Box5(double l=2.0, double b=2.0, double h=2.0)
    {
        cout <<"Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    int compare(Box5 box)
    {
        return this->Volume() > box.Volume();
    }
private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};

int my_box6(void)
{
    Box5 Box1(3.3, 1.2, 1.5);    // Declare box1
    Box5 Box2(8.5, 6.0, 2.0);    // Declare box2
    Box5 *ptrBox;                           // Declare pointer to a class

    if(Box1.compare(Box2))
    {
        cout << "Box2 is smaller than Box1" <<endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1" <<endl;
    }

    //保存第一个对象的地址, 指向类的指针（使用指针存放类的地址，使用成员运算符访问对应的成员的值）
    ptrBox = &Box1;

    // 现在尝试使用成员访问运算符来访问成员
    cout << "Volume of Box1:" << ptrBox->Volume() << endl;

    // 保存第二个对象的地址
    ptrBox = &Box2;

    // 现在尝试使用成员运算符来访问成员
    cout << "Volume of Box2:" << ptrBox->Volume() << endl;

    return 0;
}

