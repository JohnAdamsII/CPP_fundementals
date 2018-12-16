#include <iostream>
#include <string>

#define DEBUG_MODE 1

#if DEBUG_MODE == 1
#define print(x) std::cout << x << std::endl
#else
#define print(x)
#endif

#if 1

int main()
{
    print("Hello");
    std::cin.get();
}

#endif