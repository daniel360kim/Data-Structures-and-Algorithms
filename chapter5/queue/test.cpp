#include "queue.hpp"

#include <iostream>

int main()
{
    CircularBuffer<int> buf(10);

    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        buf.insert(x[i]);
    }

    std::cout << "Buff full? ";
    if(buf.full())
    {
        std::cout << "Full\n";
    }
    else
    {
        std::cout << "Not full\n";
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << buf.get() << " ";
    }

    int x_[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    for(int i = 0; i < 10; i++)
    {
        buf.insert(x_[i]);
    }

    std::cout << "\nBuff capacity: " << buf.capacity() << "\n";

}

