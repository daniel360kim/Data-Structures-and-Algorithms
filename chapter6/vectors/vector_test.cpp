#include <iostream>

#include "vector.hpp"

int main(int argc, char const *argv[])
{
    ArrayVector<int> v;
    for(int i = 0; i < 100; i++)
    {
        v.insert(i, i+1);
    }

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }

    system("pause");
    
}
