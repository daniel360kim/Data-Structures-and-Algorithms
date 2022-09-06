#ifndef STACK_HPP
#define STACK_HPP

template <typename T, int size>
class ArrayStack
{
public:
    ArrayStack();
    int get_size() const; //number of items in stack
    bool empty() const; //is the stack empty?
    const T top(); //get the top element
    void push(const T e); //push an element onto the stack
    void pop(); //pop the stack
private:
    T S[size]; //array of stack elements
    int t = -1; //index to top of stack

};

template <typename T, int size>
ArrayStack<T, size>::ArrayStack() : t(-1) {}

template <typename T, int size>
int ArrayStack<T, size>::get_size() const
{
    return t + 1;
}

template <typename T, int size> 
bool ArrayStack<T, size>::empty() const
{
    return (t < 0);
}

template <typename T, int size>
const T ArrayStack<T, size>::top() 
{
    return S[t];
}

template <typename T, int size>
void ArrayStack<T, size>::push(const T e)
{
    t++;
    S[t] = e;
}

template <typename T, int size>
void ArrayStack<T, size>::pop()
{
    t--;
}













#endif