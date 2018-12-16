#include <iostream>

// g++ constuctor.cpp -o constructor && ./constructor

class Entity
{
    public:
        float X,Y;

        Entity()
        {
            X = 0.0f;
            Y = 0.0f;
        }

        Entity(float x, float y)
        {
            X = x;
            Y = y;
        }

        Entity(float i= 0, float j=0): X(i), Y(j) {}

        ~Entity()
        {
            std::cout << "Destroyed Entity!" << std::endl;
        }
    
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }

};

int main()
{
    Entity e;
    e.Print();
    Entity e1(1,2);
    e1.Print();


    std::cin.get();
}