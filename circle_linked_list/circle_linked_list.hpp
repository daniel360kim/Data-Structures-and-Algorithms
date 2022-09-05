#ifndef CIRCLE_LINKED_LIST_HPP
#define CIRCLE_LINKED_LIST_HPP

#include <cstddef>

template <typename T>
class CircleList;

template <typename T>
class CNode
{
private:
    T elem;
    CNode *next;

    friend class CircleList<T>;
};

template <typename T>
class CircleList
{
public:
    CircleList() : cursor(NULL) {}
    ~CircleList();

    bool empty() const;
    const T& front() const;
    const T& back() const;

    void advance();
    void add(const T &e);
    void remove();

private:
    CNode<T> *cursor;
};

template <typename T>
CircleList<T>::~CircleList()
{
    while(!empty())
    {
        remove();
    }
}

template <typename T>
bool CircleList<T>::empty() const
{
    return cursor == NULL;
}

template <typename T>
const T& CircleList<T>::front() const
{
    return cursor->next->elem;
}

template <typename T>
const T& CircleList<T>::back() const
{
    return cursor->elem;
}

template <typename T>
void CircleList<T>::advance()
{
    cursor = cursor->next;
}

template <typename T>
void CircleList<T>::add(const T &e)
{
    CNode<T> *v = new CNode<T>;
    v->elem = e;
    if(cursor == NULL)
    {
        v->next = v;
        cursor = v;
    }
    else
    {
        v->next = cursor->next;
        cursor->next = v;
    }
}

template <typename T>
void CircleList<T>::remove()
{
    CNode<T> *old = cursor->next;
    if(old == cursor)
    {
        cursor = NULL;
    }
    else
    {
        cursor->next = old->next;
    }
    delete old;
}





#endif // CIRCLE_LINKED_LIST_HPP