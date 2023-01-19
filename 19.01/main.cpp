#include <iostream>

template <typename T>
class stack
{
    T items[10];
    int size = 0;
public:
    T* last;
    stack();
    ~stack();
    void push(T item);
    T pop();
    int get_size() const;
};

template <typename T>
void stack<T>::push(T item)
{
    if(size == 0)
    {

    }
    
}

int main()
{

}