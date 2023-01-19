#include "stack.h"
#include <iostream>

template <typename T>
stack<T>::~stack()
{
    while(length != 0)
    {
        void** pr = last;//указатель на последний элемент
        last = &last[1]; //передаем туда ссылку на нулевой элемент предыдущего
        delete [] pr;    //удаляем исхдный поседний элемент
        length -= 1;    
    }
}

template <typename T>
void stack<T>::push(T item)
{
    static void** elem = new void*[2];
    //elem = {*value, pointer on the last value}
    if(length == 0)
    {
        elem[0] = &item;
        elem[1] = NULL;
    }
    else
    {
        elem[0] = &item;
        elem[1] = last[0];
    }
    length += 1;
    last = elem;
}

template <typename T>
void stack<T>::pop()
{
    if(length == 0)
    {
        std::cerr << "Error: Length of stack is 0. Last element cant be removed.";
    }
    else
    {
        void** pr = last;
        last = &last[1];
        delete [] pr;
        length -= 1;
    }
}

template <typename T>
int stack<T>::get_length()
{
    return length;
}

template <typename T>
T stack<T>::get_last()
{
    if(length != 0) return *(T*)last[0];
    std::cerr << "Length is 0, there's no last element.";
}