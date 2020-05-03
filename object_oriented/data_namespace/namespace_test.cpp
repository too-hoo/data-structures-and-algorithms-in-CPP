//
// Created by toohoo on 3/5/2020.
//
// 命名空间的使用：专门解决相同函数名被定义的时候，编译器不知道调用的情况，其可以作为附加信息来区分不同的库中相同的名称的函数、类，变量等。
// 使用命名空间其实就是定义了上下文。本质上，命名空间就是定义了一个范围。
// 举例：一个文件夹中可以包含多个文件夹，每个文件夹中不能有相同的文件名，但是不同文件夹中的文件可以重名。

// namespace namespace_name{
      // 代码声明
// }

// 为了调用带有命名空间的函数或者变量，需要在前面加上命名空间的名称
// name::code;  // code可以是变量或者是函数

#include <iostream>
using namespace std;

// 第一个命名空间
namespace first_namespace{
    void func(){
        cout << "Inside first_space" << endl;
    }
}
// 第二个命名空间
namespace second_namespace{
    void func(){
        cout << "Inside second_space" << endl;
    }
}

int my_namespace1(){
    // 调用第一个命名空间中的函数
    first_namespace::func();

    // 调用第二个命名空间中的函数
    second_namespace::func();
    return 0;
}
