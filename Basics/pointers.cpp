#include <iostream>
#include <string.h>

int main()
{
    void* ptr1 = 0;    // NULL pointer
    void* ptr2 = NULL;
    void* ptr3 = nullptr;

    int var1 = 8;
    int* ptr4 = &var1;
    double* ptr = (double*)&var1;


    int var = 8;
    int* ptr = &var;
    *ptr = 10;


    char* buffer = new char[8];
    memset(buffer,0,8);

    char** ptr = &buffer;
    
    delete[] buffer; 

    std::cin.get();
}