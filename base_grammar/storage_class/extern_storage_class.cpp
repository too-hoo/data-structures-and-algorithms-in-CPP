//
// Created by toohoo on 1/5/2020.
//
#include <iostream>

int count;
extern void write_extern();

int my_extern_storage_class(){
    count = 5;
    write_extern();
    return 0;
}
