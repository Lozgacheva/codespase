#include <iostream>
#include "node.h"
#include "stack.h"

int main()
{
    stack<int> st = stack<int>();
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    std::cout << "последний элемент: " << st.get_last()->value << std::endl;
    std::cout << "длина: " << st.get_length() << std::endl;
    st.pop();
    std::cout << "последний элемент: " << st.get_last()->value << std::endl;
    std::cout << "длина: " << st.get_length() << std::endl;

    return 0;
}