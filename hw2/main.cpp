#include <iostream>
#include "stack.h"


int main() 
{
    stack<int> st;
    st.push(3);
    std::cout << st.get_length() << std::endl;
    return 0;
}