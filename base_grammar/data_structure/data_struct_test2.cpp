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
void printBook(struct Books *book); // 指向结构的指针

// 声明一个结构体类型Books
struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book3; // book2 是标识不同的实体的，唯一

int my_book_test3(){
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

    // 通过传递Book1的地址来传输Book1信息
    printBook(&Book1);
    // 通过传递Book2的地址来传输Book2信息
    printBook(&Book2);
    return 0;
}

void printBook(struct Books *book){
    // 为了使用指向该结构的指针访问结构的成员，必须使用 -> 运算符
    cout << "书的标题：" << book->title << endl;
    cout << "书的作者：" << book->author << endl;
    cout << "书的类目：" << book->subject << endl;
    cout << "书 ID：" << book->book_id << endl;
}
