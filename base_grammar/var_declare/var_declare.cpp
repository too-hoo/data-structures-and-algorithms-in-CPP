#include <iostream>
using namespace std;

// 本实例中，变量在头部就已经被声明，但是他们是在主函数中被定义和初始化的
// 变量声明
extern int a, b;
extern int c;
extern float f;

// 同样的，在函数声明的时候，提供一个函数名称，而函数的实际定义是可以在任何的地方进行
int func();

int my_var_declare() {
    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    f = 70.0 / 3.0;
    cout << f << endl;

    // 函数的调用
    int i = func();
    return i;
}

int func(){
    return 10;
}