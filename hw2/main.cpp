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
    std::cout << st.get_last()->value << std::endl;
    std::cout << st.get_length() << std::endl;
    st.pop();
    std::cout << st.get_last()->value << std::endl;
    return 0;
}