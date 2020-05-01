//
// Created by toohoo on 1/5/2020.
//
# include <iostream>
# include "head_file/myheader.h"

using namespace std;

int main(){
    int res1 = my_var_declare();
    cout << "result1: " << res1 << endl;
    int res2 = my_local_var();
    cout << "result2: " << res2 << endl;
    int res3 = my_constants_var();
    cout << "result3: " << res3 << endl;
    int res4 = my_const_key_word();
    cout << "result4:" << res4 << endl;
    int res5 = my_modifier_type();
    cout << "result5:" << res5 << endl;
    int res6 = my_static_storage_class();
    cout << "result6:" << res6 << endl;
    int res7 = my_extern_storage_class();
    cout << "result7:" << res7 << endl;
    int res8 = digit_type_test();
    cout << "result8:" << res8 << endl;
    int res9 = my_random_digit();
    cout << "result9:" << res9 << endl;
    int res10 = array_test();
    cout << "result10:" << res10 << endl;
    int res11 = two_d_array_test();
    cout << "result11:" << res11 << endl;
    int res12 = out_put_string();
    cout << "result12:" << res12 << endl;
    int res13 = string_simple_op();
    cout << "result13:" << res13 << endl;
    int res14 = my_string_class();
    cout << "result14:" << res14 << endl;
}

