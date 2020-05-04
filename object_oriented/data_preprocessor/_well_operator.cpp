//
// Created by toohoo on 4/5/2020.
//
#include <iostream>
using namespace std;

#define MKSTR(x) # x
#define concat(a, b) a ## b  // ## 运算符用于连接两个令牌。下面是一个实例：

int my_preprocessor2(){
    cout << MKSTR(HELLO C++) << endl;
// 当上面的代码被编译和执行的时候，会产生下列的结果：
// HELLO C++
// C++预处理器把下面的这行
// cout << MKSTR(HELLO C++) << endl;
// 转换成为cout << "HELLO C++" << endl;

    int cd = 100;
    cout << concat(c, d) << endl;
    // 当上面的代码被编译和执行的时候，它会产生下列结果
    // 100
    // 工作原理：C++ 预处理器把下面这行：
    // cout << concat(x, y);
    // 转换成为了：
    // cout << xy
    return 0;
}




