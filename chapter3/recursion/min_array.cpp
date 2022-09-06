//finds minimum value in an array

#include <iostream>
#include <vector>
#include <algorithm>

int min_array(int a[], int n)
{
    if(n == 1)
    {
        return a[0];
    }
    else
    {
        return std::min(a[n-1], min_array(a, n-1));   
    }
}


int main(int argc, char const *argv[])
{
    int a[5] = { 5, 6, 300, 2, 80 };

    std::cout << min_array(a, 5);


   
    return 0;
}

