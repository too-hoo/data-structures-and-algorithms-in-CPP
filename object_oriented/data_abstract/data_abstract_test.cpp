//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;

// 基础类
class Shape2
{
public:
    // 提供接口框架的纯虚函数
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width{};
    int height{};
};

// 派生类
class Rectangle2: public Shape2
{
public:
    int getArea() override
    {
        return (width * height);
    }
};
class Triangle2: public Shape2
{
public:
    int getArea() override
    {
        return (width * height)/2;
    }
};

int my_data_abstract(){
    Rectangle2 Rect;
    Triangle2 Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    // 输出对象的面积
    cout << "Total Rectangle area:" << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);
    // 输出对象的面积
    cout << "Total Triangle area:" << Tri.getArea() << endl;

    return 0;
}
