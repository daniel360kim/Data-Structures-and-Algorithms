template<typename E>
class SLinkedList;

template <typename T>
class SNode
{
private:
    T elem; //element value
    SNode<T> *next; //pointer to next item in the list

    friend class SLinkedList<T>;
};

template <typename E>
class SLinkedList
{
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    const E& front() const;
    void addFront(const E &e);
    void removeFront();
private:
    SNode<E> *head; //pointer to the head of list
};

template <typename E>
SLinkedList<E>::SLinkedList()
    : head(NULL) //the list initially is empty
{}

template <typename E>
SLinkedList<E>::~SLinkedList()
{
    while (!empty()) removeFront();
}

template <typename E>
const E& SLinkedList<E>::front() const
{
    return head->elem;
}

template <typename E>
bool SLinkedList<E>::empty() const
{
    return head == NULL;
}

template <typename E>
void SLinkedList<E>::addFront(const E &e)
{
    SNode<E> *v = new SNode<E>; //create new node
    v->elem = e; //store data
    v->next = head; //head now follows v
    head = v; //v is now the head
}

template <typename E>
void SLinkedList<E>::removeFront()
{
    SNode<E> *old = head;
    head = old->next;
    delete old;
}


