#include <iostream>
#include <string>


// Private means only the class itself and friend classes can access
// private data and functions

// Protected data/functions can be access by the class and subclasses

class Entity
{
    protected:
        int X, Y;    // members default visibility is private in classes
        void Print() {}
    public:
        Entity()
        {
            X = 0;
            Print();
        }
};

class Player : public Entity
{
   public:
    Player()
    {
        X = 2;
        Print();
    }
};

int main()
{
    Entity e;
    //e.X = 2;
   

    std::cin.get();
}