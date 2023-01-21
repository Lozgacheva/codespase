template <typename T>
class Node
{
public:
    Node(T, Node*);
    Node();
    Node<T>* pr = nullptr;
    T value;
};

template <typename T>
Node<T>::Node(T item, Node* node)
{
    value = item;
    pr = node;
}

template <typename T>
Node<T>::Node()
{
}