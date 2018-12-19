#include <iostream>

struct Entity
{
    int x, y;
};


int main()
{
    Entity e = {5,8};

    int x = e.x;
    int* position = (int*)&e;
    std::cout << position[0] << ", " << position[1] << std::endl; 

    int y = *(int*)((char*)&e + 4); // insane



    //int a = 50;
    //double value = *(double*)&a;
    //double value = a;


}