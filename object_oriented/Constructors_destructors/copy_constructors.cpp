//
// Created by toohoo on 2/5/2020.
//
#include <iostream>
using namespace std;

class Line4{
public:
    int getLength(void);
    Line4(int len);             // 简单的构造函数
    Line4(const Line4 &obj);    // 拷贝构造函数
    ~Line4();                   // 析构函数

private:
    int *ptr;
};

// 成员函数定义，包括构造函数
Line4::Line4(int len) {
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line4::Line4(const Line4 &obj) {
    cout << "调用拷贝构造函数并为指针ptr分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr;  // 拷贝值
}

Line4::~Line4() {
    cout << "释放内存" << endl;
    delete ptr;
}

int Line4::getLength() {
    return *ptr;
}

void display(Line4 obj){
    cout << "line 大小：" << obj.getLength() << endl;
}

int my_line5(){
    Line4 line1(10);

    Line4 line2 = line1;  // 这里也调用了拷贝构造函数
    display(line1);
    display(line2);
    return 0;
}
