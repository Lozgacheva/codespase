#include "stack.h"
#include <iostream>

// template<typename T>
// stack<T>::~stack()
// {
//     while(length!=0)
//     {
//         T** pr = last;
//         last = &last[1];
//         delete [] pr;
//     }
// }

template<typename T>
void stack<T>::push(T item)
{
    static T** elem = new T*[2];
    if(length == 0)
    {
        elem[0] = &item;
        elem[1] = 0;
        last = &elem;
    }
    else
    {
        elem[0] = &item;
        elem[1] = last[1];
        last = &elem;
    }
    length += 1;
}

template <typename T>
void stack<T>::pop()
{
    if(length == 0)
    {
        std::cerr << "There's no elements in stack. There's no to pop." << std::endl;
    }
    else
    {
        T** pr = last;
        last = &last[1];
        delete [] pr;
    }
}

template<typename T>
T stack<T>::get_last()
{
    return *last[0];
}

template<typename T>
int stack<T>::get_length()
{
    return length;
}