#include <iostream>

void Log(const char* message);

int main()
{
    int var = 8; // values +/- 2 billion 4 bytes (32 bits but 1 used for sign)
    unsigned int var1 = 10; // 32 bits so about 4 b
    char s; // 1 byte 
    short s; // 2 bytes
    long s; // 4 btyes
    long long s; // 8 bytes 
    // can all be unsigned 

    float var = 5.5; // 4 bytes
    double var = 5.2; // 8 bytes

    bool var = true; // 1 byte

    std::cout << sizeof(bool);


    std::cin.get();       // pause execution until enter is pressed
}


