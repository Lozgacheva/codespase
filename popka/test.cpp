#include <iostream>
#include <string>

int magic(std::string num, int lena)
{
    if(lena == 8) return 1;
    if(num[lena-1] == '0') return magic(num + "1", lena + 1);
    else if(num[lena-1] == '9') return magic(num + "8", lena + 1);
    else return magic(num + std::to_string(num[lena-1]-'0' + 1), lena + 1) + magic(num + std::to_string(num[lena-1] - '0' - 1), lena + 1);
}

int main()
{
    int ans = 9;
    int nonmagic = 1;
    int almostmagic = 2; 
    for(int i = 2; i < 9; i++)
    {
        ans = ans * 2 - nonmagic;
        nonmagic = almostmagic;
        almostmagic = almostmagic * 2;//как изменить?
    } 
    std::cout << ans << std::endl;
    
    ans = 0;
    for(int i = 1; i < 10;i++)
    {
        ans += magic(std::to_string(i), 1);
    }
    std::cout << ans << std::endl;

    return 0;
}
/*
1
2
3
4
5
6
7
8
9
*/
