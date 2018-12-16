#include <iostream>
#include <string>

void PrintEntity(Entity* e);

class Entity
{
    public:
    int x,y;

    Entity(int x, int y)
    {
        this->x = x;     // better way
        this ->y = y;

        PrintEntity(this);

    }

    int GetX() const
    {
        const Entity* e = this;
        
    }

};

void PrintEntity(Entity* e)
{
    //Print stuff
}


int main()
{

}
