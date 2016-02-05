#include "test_utilities.hpp"

extern int add(int a, int b);

int main(int argc, char** argv)
{
    int a = 1;
    int b = 2;
    
    return TEST_EXIT_CODE(a + b == add(a, b));
}