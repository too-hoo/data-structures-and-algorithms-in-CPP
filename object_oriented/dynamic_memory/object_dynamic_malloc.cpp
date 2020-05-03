//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;

class Box9{
public:
    Box9(){
        cout << "调用构造函数！" << endl;
    }
    ~Box9(){
        cout << "调用析构函数！" << endl;
    }
};
int my_box10(){
    /**
     * 如果要为4个Box对象的数组分配内存，构造函数将会被调用4次，同样的，
     * 当删除这些对象的时候，析构函数也会被调用相同的次数（4次）。
     */
    Box9* myBoxArray = new Box9[4];
    delete [] myBoxArray;  //删除数组
    return 0;
}
