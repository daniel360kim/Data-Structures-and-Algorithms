/**
Simple vector class
Does not utilize amortized allocation therefore runs in O(n) time
*/

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <stdexcept>

template <typename T>
class ArrayVector
{
public:
    ArrayVector();
    int size() const;
    bool empty() const;
    T& operator[](int i);
    T& at(int i);
    void erase(int i);
    void insert(int i, const T& e);
    void reserve(int N);
private:
    int capacity;
    int n;
    T* A;
};

template <typename T>
ArrayVector<T>::ArrayVector() : capacity(0), n(0), A(NULL) {}

template <typename T>
int ArrayVector<T>::size() const
{
    return n;
}

template <typename T>
bool ArrayVector<T>::empty() const
{
    return (size() == 0);
}

template <typename T>
T& ArrayVector<T>::operator[](int i)
{
    return A[i];
}

template <typename T>
T& ArrayVector<T>::at(int i)
{
    if (i < 0 || i >= size())
        throw std::out_of_range("Index out of range");
    return A[i];
}

template <typename T>
void ArrayVector<T>::erase(int i)
{
    for (int j = i; j < size() - 1; j++)
        A[j] = A[j + 1];
    n--;
}

template <typename T>
void ArrayVector<T>::reserve(int N)
{
    if (N < size())
        return;
    T* B = new T[N];
    for (int i = 0; i < size(); i++)
        B[i] = A[i];
    delete[] A;
    A = B;
    capacity = N;
}

template <typename T>
void ArrayVector<T>::insert(int i, const T& e)
{
    if (size() == capacity)
        reserve(2 * capacity);
    for (int j = size() - 1; j >= i; j--)
        A[j + 1] = A[j];
    A[i] = e;
    n++;
}












#endif