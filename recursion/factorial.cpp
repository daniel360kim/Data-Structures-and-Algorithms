#include <iostream>
#include <chrono>


unsigned long long recursiveFactorial(int number)
{
    if(number == 0)
    {
        return 1;
    }
    else
    {
        return number * recursiveFactorial(number - 1);
    }
}


int main(int argc, char const *argv[])
{
    std::cout << "Enter an integer!\n";

    int input = 0;
    std::cin >> input;

    unsigned long long result = recursiveFactorial(input);

    std::cout << "Factorial of: " << input << " is " << result << "\n";


}
