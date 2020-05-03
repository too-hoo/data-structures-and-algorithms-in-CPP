//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;

class Shape1{
protected:
    int width, height;
public:
    Shape1(int a=0, int b=0){
        width = a;
        height = b;
    }
    // 需要在前面加上virtual 来避免进行早绑定而出现错误（调不起来）Parent class area:
    // 编译器看的是指针的内容，而不是它的类型。因此，由于 tri 和 rec 类的对象的地址存储在 *shape 中，所以会调用各自的 area() 函数。
    virtual int area(){
        cout << "Parent class area:" << endl;
        return 0;
    }
    // 虚函数：指的是在基类中使用关键字virtual 声明的函数。在派生类中重新定义的基类中定义的虚函数时候，会告诉编译器不要静态连接到该虚函数。
    // 我们想要的是在程序中任意点可以根据所调用的对象的类型来选择调用的函数，这种操作被成为是动态链接，为后期绑定。
    // 纯虚函数
    // 我们可能想要在基类中定义虚函数，以便在派生类中重新定义该函数以更好的适用于对象，但是我们在基类中又不能对该虚函数给出有意义的实现，这个时候
    // 就会用到纯的虚函数
    // pure virtual function
    // virtual int price() = 0;
    // =0 是告诉编译器，函数没有主体，上面的函数是虚函数。
};
class Rectangle1: public Shape1{
public:
    Rectangle1(int a=0, int b=0):Shape1(a,b){}  // 构造函数
    int area(){
        cout << "Rectangle class area:" << endl;
        return (width * height);
    }
};
class Triangle1: public Shape1{
public:
    Triangle1(int a=0, int b=0): Shape1(a, b){}  // 构造函数
    int area(){
        cout << "Triangle class area:" << endl;
        return (width * height / 2);
    }
};
// main
int my_polymorphism(){
    Shape1 *shape;
    Rectangle1 rec(10, 7);
    Triangle1 tri(10, 5);

    // 存储矩阵的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->area();

    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数area
    shape->area();
    return 0;
}