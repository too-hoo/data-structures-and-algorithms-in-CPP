//
// Created by toohoo on 2/5/2020.
//

#include <iostream>

using namespace std;

class Box6
{
public:
    static int objectCount;  // 静态成员
    // 构造函数定义
    Box6(double l=2.0, double b=2.0, double h=2.0)
    {
        cout <<"Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // 每次创建对象时增加 1
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    static int getCount(){
        return objectCount;
    }
private:
    double length;     // 长度
    double breadth;    // 宽度
    double height;     // 高度
};

// 初始化类Box的静态成员
int Box6::objectCount = 0;

int my_box7(void)
{
    // 静态成员函数：在创建对象之前输出对象的总数
    cout << "Inital Stage Count:" << Box6::getCount() << endl;

    Box6 Box1(3.3, 1.2, 1.5);    // 声明 box1
    Box6 Box2(8.5, 6.0, 2.0);    // 声明 box2

    // 输出对象的总数
    cout << "Total objects: " << Box6::objectCount << endl;
    // 在创建对象之后输出对象的总数
    cout << "Final Stage Count:" << Box6::getCount() << endl;

    return 0;
}

