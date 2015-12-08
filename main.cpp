//
//  main.cpp
//  Hellow-World
//
//  Created by Juan Morales Velasco on 07/11/15.
//  Copyright © 2015 Juan Morales Velasco. All rights reserved.
//

#include <iostream>
#include "foo.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string my_string("Hello!_C++11\n");
    auto s2 = my_string;
    std::cout << s2;
    
    Foo myFoo;
    myFoo.do_something();
    return 0;
}
