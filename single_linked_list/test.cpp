#include <iostream>

#include "template.hpp"

int main(int argc, char const *argv[])
{
    SLinkedList<int> list;

    for(int i = 0; i < 5; i++)
    {
        list.addFront(i);
    }

    std::cout << "Initial List: ";
    for(int i = 0; i < 5; i++)
    {
        std::cout << list.front() << "\n";
        list.removeFront();
    }

    for(int i = 0; i < 5; i++)
    {
        list.addFront(i);
    }

    list.addFront(300);

    std::cout << "List after adding new member: ";
    for(int i = 0; i < 5; i++)
    {
        std::cout << list.front() << "\n";
        list.removeFront();
    }



    return 0;
}
