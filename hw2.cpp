#include <iostream>

template <typename T>
class A
{
public:
    T a;
    void b();
};

template <typename T>
void A<T>::b()
{
    std::cout << typeid(a).name() << std::endl;
}

int main()
{
    A<int> a;
    a.b();
    return 0;
}