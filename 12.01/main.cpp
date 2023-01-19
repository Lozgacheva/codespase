#include <iostream>

template<typename mark>
float mid(mark m1, mark m2, mark m3)
{
    int count = 2;
    if(m3 != 0) count++;
    return (m1 + m2 + m3)/count;
}

//мне не захотелось перегружать ф-ию для трех оценок:)
template<typename mark>//int, float, double
float print_average_mark(const char* name, mark m1, mark m2, mark m3 = 0)
{
    return mid(m1, m2, m3);    
}

//A – 5, B – 4, C и D – 3, F – 2
int american_marks[] = {5, 4, 3, 3, 2};
float print_average_mark(const char* name, char m1, char m2, char m3 = 0)
{
    int count = 2;
    if(m3 != 0) count++;
    int marks_int[count];
    char marks[] = {m1, m2, m3};
    for(int i = 0; i < count; i++)
        marks_int[i] = american_marks[(marks[i] + 0) % 65];  
    return mid(marks_int[0], marks_int[1], marks_int[2]);    
}

int main()
{
    //student 1
    const char* name1 = "Ivan";
    int mark1[] = {5, 4, 5};
    //student 2
    const char* name2 = "Alex";
    double mark2[] = {4.45, 3.55, 2.0};
    //student 3
    const char* name3 = "Max";
    float mark3[] = {5.0, 4.455, 1.5};
    //student 4
    const char* name4 = "Jack";
    char mark4[] = {'A', 'B', 'C'};
    
    std::cout << name1 << " " << print_average_mark(name1, mark1[0], mark1[1], mark1[2]) << std::endl;
    std::cout << name2 << " " << print_average_mark(name2, mark2[0], mark2[1], mark2[2]) << std::endl;
    std::cout << name3 << " " << print_average_mark(name3, mark3[0], mark3[1], mark3[2]) << std::endl;
    std::cout << name4 << " " << print_average_mark(name4, mark4[0], mark4[1], mark4[2]) << std::endl;

    return EXIT_SUCCESS;
}