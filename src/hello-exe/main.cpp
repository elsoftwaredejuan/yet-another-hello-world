//
//  main.cpp
//  Hellow-World
//

#include <iostream>
#include "hello-dll/foo.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string my_string("Hello!_C++11\n");
    auto s2 = my_string;
    std::cout << s2;
    
    Foo myFoo;
    std::vector<int> my_vector = myFoo.do_something();
    for(auto& v :my_vector)
    {
        std::cout << v << " ";
    }
    std::cout << '\n' ;

    return 0;
}
