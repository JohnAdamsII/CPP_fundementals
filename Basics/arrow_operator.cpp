#include <iostream>
#include <string>


class Entity
{
    public:
        void Print() const { std::cout << "Hello!" << std::endl; }
};


class ScopedPtr
{
    private:
        Entity* m_Obj;
    public:
        ScopedPtr(Entity* entity)
            :m_Obj(entity) {}
        
        ~ScopedPtr()
        {
            delete m_Obj;
        }

        Entity* operator->()
        {
            return m_Obj;
        }
};

struct Vector3
{
    float x,y,z;
};

int main()
{
    int offset = (int)&((Vector3*)0)-> x; // 0 because it's first in struct mem, y would be 4, because 4 byte offset
    ScopedPtr entity = new Entity();
    entity->Print();


    Entity e;
    e.Print();

    Entity* ptr = &e;
    //Entity& Entity = *ptr;
    // Entity.Print();
    // (*ptr).Print();
    ptr->Print(); // BEST
}