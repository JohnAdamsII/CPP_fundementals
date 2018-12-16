#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
    std::cout << string << std::endl;
}



int main()
{
    char* ptr = "ABC" ;   // done on stack double quotes are char pointers
    char name[5] = {'J','O','H','N', 0}; // need NULL terminating char to work correct
    std::cout << name << std::endl;
    std::cout << ptr << std::endl;
    std::cout << ptr[0] << std::endl;
    std::cout << (int *)ptr[0] << std::endl;

    char first_char = *ptr;
    std::cout << first_char << std::endl;

    std::string myname = "John"; // really a const char array
    myname += "Hello!";

    bool contains = myname.find("Jo") != std::string::npos;

    std::string another = std::string("John") + "Hello!";

    
    std::cin.get();
}
