#include <iostream>
#include <string>

using String = std::string;

class Entity
{
    private:
        String m_Name;
    
    public:
        Entity() : m_Name("Unknown") {}    // default constructor
        Entity(const String& name) : m_Name(name) {}

        const String& GetName() const { return m_Name; }
};

int main()
{
    Entity entity; // calls default constructor because no ()
    
     // Best way to create objects (not always possible)
    Entity e1("John");
    Entity e2 = Entity("John");

    Entity* e;  // stack allocated, lifetime is only the scope of where var is declared
    {
        e = &e1;
    }

    Entity* e3;
    {
        Entity* entity = new Entity("John"); // allocate on heap and call constructor 
        // allocating on heap takes longer than stack , stack size is smaller tho
        // allocating on heap requires maual freeing of that memory
        e3 = entity;
        std::cout << entity->GetName() << std::endl;
        std::cout << (*entity).GetName() << std::endl;
       // delete entity;
    }

    delete e3;

  
}