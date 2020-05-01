cmake_minimum_required(VERSION 3.16)
project(base_grammar)

set(CMAKE_CXX_STANDARD 14)

add_executable(base_grammar var_declare/var_declare.cpp
        var_scope/local_var.cpp main.cpp var_constants/constants_var.cpp modifier_type/modifier_type.cpp
        storage_class/static_storage_class.cpp storage_class/extern_storage_class.cpp storage_class/support.cpp storage_class/thread_local_class.cpp digit_type/my_digit_type.cpp digit_type/random_num.cpp array/my_array.cpp array/two_d_array.cpp string_type/string_test.cpp string_type/string_operate.cpp string_type/string_class.cpp)