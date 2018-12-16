#include <iostream>
#include <array>

int main()
{
    int example[5];

    0[example] = 1;

    std::cout << example[0] << std::endl;
    int* ptr = example;

    example[2] = 5;
    *(ptr+2) = 5;
    *(int*)((char*)ptr + 8) = 5;


    int* another = new int[5]; // heap allocated
    delete[] another;


    int a[5];
    int count = sizeof(a)/sizeof(int);  //only works with static (stack arrays) to get number of elements
    
    const int size = 5;
    int example[size];      //doesn't work

    static const int exampeSize = 5;
    int example[exampeSize];                  // Good does work

    std::array<int,5> myarray;
    //std::cout << myarray.size();


    example[0] = 2;
    example[4] = 4;
 
    std::cin.get();
}
