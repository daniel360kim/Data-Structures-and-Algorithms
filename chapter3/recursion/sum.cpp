//computes sum of all numbers from 1 to n


#include <iostream>


int sum(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}


int main(int argc, char const *argv[])
{
    std::cout << "Enter a number\n";
    int input = 0;
    std::cin >> input;

    std::cout << "The summation is: " << sum(input);

   
    return 0;
}

