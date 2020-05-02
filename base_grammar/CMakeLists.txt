cmake_minimum_required(VERSION 3.16)
project(base_grammar)

set(CMAKE_CXX_STANDARD 14)

add_executable(base_grammar var_declare/var_declare.cpp
        var_scope/local_var.cpp main.cpp var_constants/constants_var.cpp modifier_type/modifier_type.cpp
        storage_class/static_storage_class.cpp storage_class/extern_storage_class.cpp storage_class/support.cpp
        storage_class/thread_local_class.cpp digit_type/my_digit_type.cpp digit_type/random_num.cpp array/my_array.cpp
        array/two_d_array.cpp string_type/string_test.cpp string_type/string_operate.cpp string_type/string_class.cpp
        pointer/my_pointer_test1.cpp pointer/my_pointer_test2.cpp quote/quote_test1.cpp date_time/date_time_test.cpp
        date_time/format_date_time.cpp base_io/standard_out.cpp base_io/standard_in.cpp base_io/standard_err.cpp
        data_structure/data_struct_test.cpp data_structure/data_struct_test1.cpp data_structure/data_struct_test2.cpp data_structure/data_struct_test3.cpp)