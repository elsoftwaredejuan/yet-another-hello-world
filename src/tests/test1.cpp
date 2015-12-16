#include <gtest/gtest.h>
#include <vector>
#include "hello-dll/foo.hpp"


    TEST(MyTestSuite, MyFirstTest) {
        Foo myFoo;
    	std::vector<int> my_vector = myFoo.do_something();
    	std::vector<int>  v = { 9, 3, 12, 3, 15, 27 };
        EXPECT_EQ(my_vector, v);
    }

    int main(int argc, char **argv) {
        ::testing::InitGoogleTest( &argc, argv );
        return RUN_ALL_TESTS();
    }
