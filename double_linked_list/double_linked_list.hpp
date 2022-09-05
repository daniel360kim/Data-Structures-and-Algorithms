//Cannot modify inner parts of the list....yet....

template <typename T>
class DoubleLinkedList;

template <typename T>
class Node
{
private:
    T elem;
    Node *next;
    Node *prev;

    friend class DoubleLinkedList<T>;

};

template <typename T>
class DoubleLinkedList
{
public:
    DoubleLinkedList();
    ~DoubleLinkedList();

    bool empty() const;
    const T& front() const;
    const T& back() const;

    void addFront(const T &e);
    void addBack(const T &e);

    void removeFront();
    void removeBack();
private:
    Node<T> *head;
    Node<T> *tail;
protected:
    void add(Node<T> *v, const T &e);
    void remove(Node<T> *v);
};

template <typename T>
DoubleLinkedList<T>::DoubleLinkedList()
{
    head = new Node<T>;
    tail = new Node<T>;

    head->next = tail;
    tail->prev = head;

}

template <typename T>
DoubleLinkedList<T>::~DoubleLinkedList()
{
    while(!empty())
    {
        removeFront();
    }

    delete head;
    delete tail;
}

template <typename T>
bool DoubleLinkedList<T>::empty() const
{
    return head->next == tail;
}

template <typename T>
const T& DoubleLinkedList<T>::front() const
{
    return head->next->elem;
}

template <typename T>
const T& DoubleLinkedList<T>::back() const
{
    return tail->prev->elem;
}

template <typename T>
void DoubleLinkedList<T>::add(Node<T> *v, const T &e)
{
    Node<T> *u = new Node<T>; //create new node
    u->elem = e; //set new node as parameter
    u->next = v; //next node is now v
    u->prev = v->prev; 
    v->prev->next = v->prev = u;
}

template <typename T>
void DoubleLinkedList<T>::addFront(const T &e)
{
    add(head->next, e);
}

template <typename T>
void DoubleLinkedList<T>::addBack(const T &e)
{
    add(tail, e);
}

template <typename T>
void DoubleLinkedList<T>::remove(Node<T> *v)
{
    Node<T> *u = v->prev;
    Node<T> *w = v->next;

    u->next = w;
    w->prev = u;
    
    delete v;
} 

template <typename T>
void DoubleLinkedList<T>::removeFront()
{
    remove(head->next);
}

template <typename T>
void DoubleLinkedList<T>::removeBack()
{
    remove(tail->prev);
}