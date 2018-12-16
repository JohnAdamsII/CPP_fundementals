#include <iostream>
#include <string>

using String = std::string;

class Entity
{
    private:
        String m_Name;
        int m_Age;
    
    public:
        Entity(const String& name) 
            : m_Name(name), m_Age(-1) {}

        explicit Entity(int age)
            : m_Name("Unknown"), m_Age(age) {}


        const String& GetName() const { return m_Name; }
};


int main()
{
    Entity a("John");
    Entity b(24);

    Entity c = Entity("John");
    Entity d = String("John");
    // Entity e = 24; 
    // can do if removed explicit keyword from constructor
     //implicitly creates entity from constructor with int parameter
    // compiler only allowed to do 1 implicit covertion 

    // if constructor given keyword explicit 
    // line 31 must be changed to be similar to line 27 or

    Entity f = Entity(24);
}