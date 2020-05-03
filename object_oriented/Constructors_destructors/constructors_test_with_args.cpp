//
// Created by toohoo on 2/5/2020.
//
#include <iostream>

using namespace std;

class Line2
{
public:
    void setLength( double len );
    double getLength( void );
    Line2(double len);  // 这是构造函数, 传入参数

private:
    double length;
};

// 成员函数定义，包括构造函数
Line2::Line2( double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

void Line2::setLength( double len )
{
    length = len;
}

double Line2::getLength( void )
{
    return length;
}
// 程序的主函数
int my_line3( )
{
    Line2 line(10.0);

    // 获取默认设置的长度
    cout << "Length of line : " << line.getLength() <<endl;
    // 再次设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() <<endl;

    return 0;
}
