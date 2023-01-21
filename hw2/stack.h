template <typename T>
class stack
{
private:
    Node<T>* last;
    int length = 0;
public:
    stack();
    void push(T);
    void pop();
    int get_length();
    Node<T>* get_last();
    ~stack();
};



template <typename T>
stack<T>::stack()
{
    last = new Node<T>();
}

template <typename T>
void stack<T>::push(T item)
{
    Node<T>* time_p = last;
    last = new Node<T>(item, time_p);
    length += 1;
}

template <typename T>
void stack<T>::pop()
{
    if(length == 0)
    {
        std::cout << "stack is empty" << std::endl;
    }
    else
    {
        Node<T>* time_p = last;
        last = last->pr;
        delete time_p;
        length -= 1;
    } 
}

template <typename T>
int stack<T>::get_length()
{
    return length;
}

template <typename T>
Node<T>* stack<T>::get_last()
{
    return last;
}

template <typename T>
stack<T>::~stack()
{
    while(length != 0)
    {
        pop();
    }
}
