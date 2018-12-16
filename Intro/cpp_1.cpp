#include <iostream>

void Log(const char* message);

int main()
{
    Log("Hello World");
    std::cin.get();       // pause execution until enter is pressed
}


// g++ -E file.cpp 
// above line gives preprocessor code 

// g++ -S -o asm_cpp_1.s cpp_1.cpp
// above line gives assembly code

// g++ -O2 -S -o opt_asm_cpp_1.s cpp_1.cpp
// optmizes for speed and saves assembly code file