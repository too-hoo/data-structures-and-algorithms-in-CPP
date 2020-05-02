//
// Created by toohoo on 2/5/2020.
//
/*
struct type_name {
    member_type1 member_name1;
    member_type2 member_name2;
    member_type3 member_name3;
    ...
} object_names;
*/
#include <iostream>
#include <cstring>
using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book1;

int my_book_test(){
    Books Book1;  // 定义结构体类型Books的变量 Book1
    Books Book2;  // 定义结构体类型Books的变量 Book2

    // Book1 详述
    strcpy(Book1.title, "C++教程");
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "编程语言");
    Book1.book_id = 12345;

    // Book2 详述
    strcpy(Book2.title, "CSS 教程");
    strcpy(Book2.author, "Runoob");
    strcpy(Book2.subject, "前端技术");
    Book2.book_id = 12346;

    // 输出Book1信息
    cout << "第一本书的标题：" << Book1.title << endl;
    cout << "第一本书的作者：" << Book1.author << endl;
    cout << "第一本书的类目：" << Book1.subject << endl;
    cout << "第一本书 ID：" << Book1.book_id << endl;

    // 输出Book2信息
    cout << "第二本书的标题：" << Book2.title << endl;
    cout << "第二本书的作者：" << Book2.author << endl;
    cout << "第二本书的类目：" << Book2.subject << endl;
    cout << "第二本书 ID：" << Book2.book_id << endl;
    return 0;
}
