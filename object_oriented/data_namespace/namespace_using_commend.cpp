//
// Created by toohoo on 3/5/2020.
//
// 使用using namespace指令，这样在使用命名空间的时候就不需要在前面再加上命名空间的名字。这个指令会告诉编译器，后续的代码将使用这个指定的命名空间
#include <iostream>
using namespace std;

// 第一个命名空间
namespace first_namespace{
    void func1(){
        cout << "Inside first_space" << endl;
    }
}
// 第二个命名空间
namespace second_namespace{
    void func1(){
        cout << "Inside second_space" << endl;
    }
}

using namespace first_namespace;
int my_namespace2(){
    // 调用第一个命名空间中的函数
    func1();  //同一工程中相同的命名空间被多次定义在不同文件中，其中的函数名称不能相同
    return 0;
}