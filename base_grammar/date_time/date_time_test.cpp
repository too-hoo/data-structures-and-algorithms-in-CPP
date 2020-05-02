//
// Created by toohoo on 2/5/2020.
//
/*
struct tm{
    int tm_sec; //秒，正常范围是从0到59，但是允许至61
    int tm_min; //分，范围从0到59
    int tm_hour; //小时，范围从0到23
    int tm_mday; // 一个月中的第几天，范围从1到31
    int tm_month; //月， 范围从0到11
    int tm_year; // 从1900年起的年数
    int tm_wday; // 一周中的第几天，范围从0到6，从星期日算起
    int tm_yday; //一年中的第几天，范围从0到365，从1月1日算起
    int tm_isdst; // 夏令时
};
*/
#include <iostream>
#include <ctime>

using namespace std;

int current_date_time(){
    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    // 把now转换成为字符串的形式
    char* dt = ctime(&now);

    cout << "本地日期和时间：" << dt << endl;

    // 把now 转换为tm结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;
    return 0;
}
