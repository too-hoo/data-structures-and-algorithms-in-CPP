//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;

class Box7{
public:
    double getVolume(void){
        return length * breadth * height;
    }
    void setLength(double len){
        length = len;
    }
    void setBreadth(double bre){
        breadth = bre;
    }
    void setHeight(double hei){
        height = hei;
    }
    // 重载 + 运算符， 用于把两个Box对象相加
    Box7 operator+(const Box7& b){  // 重载加法运算
        Box7 box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

    // 重载负运算符
    Box7 operator-(const Box7& b){
        Box7 box;
        box.length = -(this->length + b.length);
        box.breadth = -(this->breadth + b.breadth);
        box.height = -(this->height + b.height);
        return box;
    }

    // 重载小于运算符（<）
    bool operator<(const Box7& b){
        Box7 box;
        if (box.length){
            return true;
        }
        return false;
    }

private:
    double length;  //长
    double breadth;  //宽
    double height; //高
};

int my_box8(){
    Box7 Box1;   // 声明Box1， 类型为Box
    Box7 Box2;   // 声明Box2， 类型为Box
    Box7 Box3;   // 声明Box3， 类型为Box
    double volume = 0.0;   // 把体积存储在该变量中

    // Box1 详述
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // Box2 详述
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // Box1的体积
    volume = Box1.getVolume();
    cout << "Volume of Box1:" << volume << endl;

    // Box2 的体积
    volume = Box2.getVolume();
    cout << "Volume of Box2:" << volume << endl;

    // 把两个对象相加，得到Box3
    Box3 = Box1 + Box2;

    // Box3的体积
    volume = Box3.getVolume();
    cout << "Volume of Box3:" << volume << endl;
    return 0;
}