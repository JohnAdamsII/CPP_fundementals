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
    int a = 2;
    int* b = new int;
    int* c = new int[50]; // 200 bytes (50 * 4)

    Entity* e = new Entity;
    Entity* e = new Entity();   // creates entity on heap and calls contructor
    Entity* e = new Entity[50]; //creates contigous block of heap memory for array of entites
    
    // new normally calls malloc
    // so instead

    Entity* e = (Entity*)malloc(sizeof(Entity)); // usally DONT DO THIS

    // only differences is this doesnt call constructor
    
    delete b,e ;
    delete[] c;
 
    // delete calls free(b)...
    // delete also calls the destructor


    // using new() allows placement of allocated memory
    int* b = new int[50];
   // Entity* e = new(b) Entity();
   //                 ^
}

    // heap allocation (using new) is slower 
    // because it needs to find a contigous block of mem
    // big enough for your request and return a pointer
    // to first block