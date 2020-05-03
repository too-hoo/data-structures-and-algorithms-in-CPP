## C++ 标准的异常

c++提供了一系列的标准的异常，定义在<exception>中，我们可以在程序中使用这些标准的异常，他们是以父子类的层次机构组织起来的。

### exception (是所有C++异常的夫类)
- std:bad_alloc ：该异常可以通过new抛出
- std:bad_cast： 该异常可以dynamic_cast抛出
- std:bad_typeid：  该异常可以在typeid中抛出
- std:bad_exception： 这在处理C++程序中无法预料到的异常的时候非常有用
- std:logic_error：理论上可以通过读取代码来检测到异常
    - std:domain_error：当使用一个无效的数学域的时候会抛出该异常
    - std:invalid_argument： 当使用无效的参数的时候，会抛出异常
    - std:length_error：当创建了太长的std::string的时候会抛出这个异常
    - std:out_of_range：该异常可以通过方法抛出，例如std::vector和std::bitset<>::operator[]().
- std:runtime_error: 理论上不可以通过读取代码来检测异常
    - std: overflow_error： 发生数学上的溢出的时候，会抛出该异常
    - std: range_error：当尝试存储超过范围的值的时候，会抛出此异常
    - std: underflow_error： 当发生数学下溢的时候会抛出该异常
 