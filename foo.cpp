//
//  foo.cpp
//  Hellow-World
//

#include "foo.hpp"

#include <iostream>
#include <vector>

Foo::Foo(){}
void Foo::do_something(){

    std::vector<int> my_vector = {3, 1, 4, 1, 5, 9};
    
    for(auto& v :my_vector)
    {
        std::cout << v << "\n";
    }
}