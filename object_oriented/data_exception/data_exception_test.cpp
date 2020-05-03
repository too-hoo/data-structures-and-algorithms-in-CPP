//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;

double division(int a, int b){
    if (b == 0){
        throw "Division by zero condition!";
    }
    return (a/b);
}

// main
int my_exception(){
    int x = 50;
    int y = 0;
    double z = 0;

    try{
        z = division(x, y);
        cout << z << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
// 由于我们抛出一个类型为const char* 的异常，因此，当捕获该异常的时候，我们必须在catch代码块中使用const char* .
// 所以，当上面的代码被执行之后会被输出一下的结果

