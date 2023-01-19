#include <iostream>
#include "header.h"

template <typename T>
void A<T>::b()
{
    std::cout << typeid(a).name() << std::endl;
}