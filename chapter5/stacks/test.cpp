#include <iostream>

#include "stack.hpp"

int main(int argc, char const *argv[])
{
    ArrayStack<int, 2> stack;
    stack.push(1);
    stack.push(2);


    std::cout << "Top is: " << stack.top() << "\n";
    return 0;
}
