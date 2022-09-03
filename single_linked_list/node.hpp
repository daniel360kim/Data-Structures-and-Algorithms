template <typename T>
class SNode
{
private:
    T elem; //element value
    SNode<T> *next; //pointer to next item in the list

    friend class SLinkedList<E>;
};