//finds minimum value in an array

#include <iostream>
#include <iomanip>

//Simple version
int findsum(int a[], int n)
{
    if(n == 1)
    {
        return a[0];
    }
    else
    {
        return a[n - 1] + findsum(a, n - 1);
    }
}

//Templated version
template <typename T>
T cumsum(T a[], int n)
{
    if(n == 1)
    {
        return a[0];
    }
    else
    {
        return a[n - 1] + cumsum<T>(a, n - 1);
    }
}


/* Simple Test */
int main(int argc, char const *argv[])
{
    double numbers[5] = { 1.31232, 1.51236, 1.88434, 7.9227, 13.13862 };


    std::cout << "Sum is: " << cumsum<double>(numbers, 5);

   
    return 0;
}

