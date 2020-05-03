//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;

class Adder1{
public:
    // 构造函数
    Adder1(int i = 0){
        total = i;
    }
    // 对外的接口
    void addNum(int number){
        total += number;
    }
    // 对外的接口
    int getTotal(){
        return total;
    }

private:
    // 对外隐藏数据
    int total;
};

int my_data_abstraction(){
    Adder1 a;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    cout << "Total " << a.getTotal() << endl;
    return 0;

}
