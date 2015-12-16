//
//  foo.cpp
//  Hellow-World
//

#include "foo.hpp"

#include <iostream>
#include <vector>
#include <algorithm>

Foo::Foo(){}
std::vector<int> Foo::do_something(){

    std::vector<int> my_vector = {3, 1, 4, 1, 5, 9};

    std::transform(my_vector.begin(), my_vector.end(), my_vector.begin(), 
   				[](int d) -> int { return d * 3; }
   	);
    
    return my_vector;
}