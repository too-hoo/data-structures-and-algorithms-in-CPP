//
// Created by toohoo on 3/5/2020.
//
#include <fstream>
#include <iostream>
using namespace std;

int my_file_stream1(){
    char data[100];

    // 以写模式打开文件
    ofstream outfile;
    outfile.open("afile.dat");
    cout << "Writing to the file" << endl;
    cout << "Enter your name:";
    cin.getline(data, 100);

    // 向文件写入用户输入的数据
    outfile << data << endl;

    cout << "Enter your age:";
    cin >> data;
    cin.ignore();

    // 再次向文件中写入用户输入的数据
    outfile << data << endl;
    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data;

    // 在屏幕上面写上数据
    cout << data << endl;

    // 再次从文件中读取数据，并显示它
    infile >> data;
    cout << data << endl;

    // 关闭打开的文件
    infile.close();
    return 0;
}
/*
 // 定位到fileObject 的第n个字节（假设是ios::beg）
 fileObject.seekg(n);
 // 把文件的读指针从fileObject当前的闻之向后移动n个字节
 fileObject.seekg(n, ios::cur);
 // 把文件的读指针从fileObject 末尾往回移动n个字节
 fileObject.seekg(n, ios::end);
 // 定位到fileObject的末尾
 fileObject.seekg(0, ios::end);
 */
