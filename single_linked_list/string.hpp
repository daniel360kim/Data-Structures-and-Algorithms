#include <string>

class StringNode
{
private:
    std::string elem; //element value
    StringNode *next; //next item in the list

    friend class StringLinkedList; //provide StringLinkedList access
};

class StringLinkedList
{
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const std::string& front() const;
    void addFront(const std::string& e);
    void removeFront();
private:
    StringNode *head; //pointer to the head of list
};

StringLinkedList::StringLinkedList()
    : head(NULL) //the list initially is empty
{}

StringLinkedList::~StringLinkedList()
{
    while (!empty()) removeFront();
}

const std::string& StringLinkedList::front() const
{
    return head->elem;
}

bool StringLinkedList::empty() const
{
    return head == NULL;
}

void StringLinkedList::addFront(const std::string& e)
{
    StringNode *v = new StringNode; //create new node
    v->elem = e; //store data
    v->next = head; //head now follows v
    head = v; //v is now the head
}

void StringLinkedList::removeFront()
{
    StringNode *old = new StringNode;
    head = old->next;
    delete old;
}