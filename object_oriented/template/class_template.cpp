//
// Created by toohoo on 3/5/2020.
//
// 定义类模板
// template <class type> class class-name{
//
// };
// 这里的type是占位符类型名称，可以在类被实例化的时候进行指定。可以使用一个逗号分隔
// 的列表来定义多个泛型数据类型。例如：定义类Stack<>,并实现了泛型方法来对元素进行入栈出栈操作
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack{
private:
    vector<T> elems;  // 元素
public:
    void push(T const&); // 入栈
    void pop();             // 出栈
    T top() const;          // 返回栈頂元素
    bool empty() const {
        return elems.empty();
    }
};

template <class T>
void Stack<T>::push(T const& elem) {
    // 追加传入元素的副本
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop(){
    if (elems.empty()){
        throw out_of_range("Stack<>::pop():empty stack");
    }
    // 删除最后一个元素
    elems.pop_back();
}

template <class T>
T Stack<T>::top () const {
    if (elems.empty()){
        throw out_of_range("Stack<>::top():empty stack");
    }
    // 返回最后一个元素的副本
    return elems.back();
}

int my_template2(){
    try{
        Stack<int> intStack;  //int 类型的栈
        Stack<string> stringStack; // string 类型的栈

        // 操作 int 类型的栈
        intStack.push(7);
        cout << intStack.top() << endl;

        // 操作string类型的栈
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const& ex) {
        cerr << "Exception:" << ex.what() << endl;
        return -1;
    }
}


