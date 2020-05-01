//
// Created by toohoo on 1/5/2020.
//
# include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int my_constants_var(){
    // 局部变量
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return area;
}

// const key word
int my_const_key_word(){
    const int MY_LENGTH = 20;
    const int MY_WIDTH = 6;
    const char MY_NEWLINE = '\n';
    int area;

    area = MY_LENGTH * MY_WIDTH;
    cout << area;
    cout << MY_NEWLINE;
    return area;
}
