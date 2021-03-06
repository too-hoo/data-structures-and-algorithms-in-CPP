cmake_minimum_required(VERSION 3.16)
project(object_oriented)

set(CMAKE_CXX_STANDARD 14)

add_executable(object_oriented main.cpp object_type/class_define.cpp header_files/pro_header.h
        object_type/member_function.cpp access_modifier/public_modifier.cpp access_modifier/private_modifier.cpp
        access_modifier/protected_modifier.cpp access_modifier/public_inherit.cpp access_modifier/protected_inherit.cpp
        access_modifier/private_inherit.cpp Constructors_destructors/constructors_test.cpp Constructors_destructors/constructors_test_with_args.cpp
        Constructors_destructors/destructors_test.cpp Constructors_destructors/copy_constructors.cpp object_type/friend_inline_function.cpp
        object_type/this_pointer_and_pointer_to_class.cpp object_type/static_member_of_class.cpp inherit_class/inherit_class_test.cpp
        override/func_override.cpp override/operator_override.cpp polymorphism/polymorphism_test.cpp data_abstraction/data_abstraction_test.cpp
        data_encapsulation/data_encapsulation_test.cpp data_abstract/data_abstract_test.cpp file_stream/file_stream_test.cpp data_exception/data_exception_test.cpp
        data_exception/self_define_exception.cpp dynamic_memory/new_delete_operater.cpp dynamic_memory/one_two_array_dynamic_storage_malloc.cpp dynamic_memory/three_d_array_dynamic_memory_alloc.cpp
        dynamic_memory/object_dynamic_malloc.cpp data_namespace/namespace_test.cpp data_namespace/namespace_using_commend.cpp data_namespace/std_out.cpp data_namespace/nested_namespace.cpp
        template/func_template.cpp template/class_template.cpp data_preprocessor/define_preprocessor.cpp data_preprocessor/conditional_compilation.cpp data_preprocessor/_well_operator.cpp data_preprocessor/macro_definition.cpp data_signal/signal_test.cpp data_signal/raise_test.cpp multithreading/multithreading_test.cpp multithreading/multithreading_test1.cpp multithreading/multithreading_args.cpp multithreading/thread_connection_separation.cpp STL/vector_test.cpp)