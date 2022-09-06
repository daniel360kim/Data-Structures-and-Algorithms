#include <vector>
#include <iostream>

#include "stack.hpp"

template <typename T, int vector_size>
void reverse_vector(std::vector<T> &vec)
{
    ArrayStack<T, vector_size> s;
    for(int i = 0; i < vector_size; i++)
    {
        s.push(vec[i]);
    }
    for(int i = 0; i < vector_size; i++)
    {
        vec[i] = s.top();
        s.pop();
    }
}
int main(int argc, char const *argv[])
{
    std::vector<int> vec = { 1, 2, 3, 4, 5 };

    reverse_vector<int, 5>(vec);

    std::cout << "Reversed Vector: ";

    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    return 0;
}
