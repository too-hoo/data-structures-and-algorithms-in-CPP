//
// Created by toohoo on 3/5/2020.
//
#include <iostream>
using namespace std;
// double* pvalue = NULL; // 初始化为NULL的指针
// pvalue = new double;  // 为变量请求内存

// 如果自由存储区域已经被分配完成之后，可能无法成功分配内存。所以需要检查new运算符是否返回NULL指针，并需要采取适当的操作进行判断
/*
double* pvalue = NULL;
if (!(pvalue = new double)){
    cout << "Error: out of memory." << endl;
    exit(1);
}
*/
// malloc()函数在C语言中出现了，但是在C++中仍然存在，但是建议尽量不要使用malloc()函数。因为new与malloc()相比，其主要的优点是，new不仅分配了
// 内存， 而且还创建了对象。
// 在任何时候，当觉得某个已经分配内存的变量不需要使用的时候，可以使用delete操作符号对该变量进行删除来释放该内存。
// delete pvalue;

int my_new_delete_operator(){
    double* pvalue = NULL; // 初始化为null的指针
    pvalue = new double;   // 为变量请求内存

    *pvalue = 29494.99; // 在分配的地址存储值
    cout << "Value of pvalue:" << *pvalue << endl;

    delete pvalue;   //释放内存

    return 0;
}

