#include <iostream>
#include <string>

template<typename T, int N>
class Array 
{
    private:
    T m_Array[N];

    public:
        int GetSize() const { return N; }
};



template<typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}



int main()
{
    Array<int, 5> arr;
    Array<std::string, 10> arr;  

    Print(5);
    Print<int>(5);
    Print("Hello");
    Print(5.5f);
}