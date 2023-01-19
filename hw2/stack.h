template <typename T>
class stack
{
private:
    void** last;
    T* items;
    int length = 0;
public:
    ~stack();
    void push(T);
    void pop();
    T get_last();
    int get_length();
};