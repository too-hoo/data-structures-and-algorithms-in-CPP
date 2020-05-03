//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;
// 基础类
class Shape{
public:
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
protected:
    int width;
    int height;
};

// 基础类
class PaintCost{
public:
    int getCost(int area){
        return area * 70;
    }
};

// 派生类, 多继承
class Rectangle: public Shape, public PaintCost{
public:
    int getArea(){
        return (width * height);
    }
};

int my_inherit1(){
    Rectangle Rect;
    int area;

    Rect.setWidth(5);
    Rect.setHeight(7);

    area = Rect.getArea();

    // 输出对象的面积
    cout << "Total area:" << Rect.getArea() << endl;

    // 输出总花费
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;
    return 0;
}

