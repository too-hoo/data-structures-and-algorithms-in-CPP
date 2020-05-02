//
// Created by toohoo on 2/5/2020.
//
typedef struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}Books;

Books Book1, Book2;

// 我们可以使用typedef 关键字来定义非结构类型
typedef long int *pint32;

pint32 x, y, z;

//说明x，y，z都是指向长整形long int 的指针
