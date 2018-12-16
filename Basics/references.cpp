#include <iostream>


void Increment(int* value)     // This is ugly
{
    (*value)++;
}

void Increment(int& value)     // This is good
{
    value++;
}


int main()
{
       int a = 5; 
       Increment(a);
       //int& ref = a;

       std::cin.get();
}