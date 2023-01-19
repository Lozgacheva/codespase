#include <iostream>

//почему переопрпеделенный опретор не работает в main?
bool operator < (std::string s1, std::string s2)
{
    int ss1 = sizeof(s1);
    int ss2 = sizeof(s2);
    std::cout << "was called" << std::endl;
    return ss1 < ss2 ? ss1 : ss2;
}
bool operator > (std::string s1, std::string s2)
{
    int ss1 = sizeof(s1);
    int ss2 = sizeof(s2);
    // std::cout << "was called" << std::endl;
    return ss1 > ss2 ? ss1 : ss2;
}

template <typename T>
int* special(T* arr, int lena)
{
    if(lena == 0)
    {
        std::cerr << "Length of array is 0, max and min values cant be chosen" << std::endl;
        exit(1);
    }
    int* inds = new int[2];//0-min 1-max
    T mina = arr[0];
    T maxa = arr[0];
    for(int i = 1; i < lena; i++)
    {
        if(arr[i] < mina) 
        {
            mina = arr[i];
            inds[0] = i;
        }
        if(arr[i] > maxa)
        {
            maxa = arr[i];
            inds[1] = i;
        }
    }
    return inds;
}

int main()
{
    std::string a[] = {"a", "aaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaag+aaaaaaaa"};
    int* inds;
    // std::cout << sizeof(a[0]) << std::endl;
    // std::cout << sizeof(a[2]) << std::endl;
    inds = special(a, sizeof(a)/sizeof(a[0]));
    std::cout << inds[0] << " " << inds[1] << std::endl;
    std::cout << "standard" << std::endl;
    bool k = a[0] < a[1];
    std::cout << k << std::endl;
    return EXIT_SUCCESS;
}
