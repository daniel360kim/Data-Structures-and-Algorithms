#include <iostream>

unsigned long long fibonnaci(unsigned long long n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonnaci(n - 1) + fibonnaci(n - 2);
}

int main(int argc, char const *argv[])
{

    std::cout << "Enter an integer!\n";

    unsigned long long input = 0;
    std::cin >> input;

    unsigned long long result = fibonnaci(input);

    std::cout << "Fibonnaci of: " << input << " is " << result << "\n";
    

}
