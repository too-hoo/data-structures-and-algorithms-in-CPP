//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;

struct MyException: public exception{
    const char* what() const throw(){
        return "C++ Exception";
    }
};

int self_define_exception(){
    try{
        throw MyException();
    }
    catch (MyException& e) {  //抓住MyException的地址上面抛出的异常
        std::cout << "MyException catched" << endl;
        std::cout << e.what() << endl;  //在这里what()方法是异常类提供的一个公共的方法，它已经被所有的子异常重载，将返回异常产生的原因
    }
    catch (exception& e) {
        // 其他的类型错误
    }
    return 0;
}

