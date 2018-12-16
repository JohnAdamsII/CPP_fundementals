#include <iostream>
#include <string>

class Entity
{
    public:
        virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
    private:
        std::string m_Name;
    public:
        Player(const std::string& name): m_Name(name) {}

        std::string GetName() override {return m_Name;}   // override not needed but helpful
};

void PrintName(Entity* entity)
{
   std::cout << entity->GetName() << std::endl; 
}


int main()
{
    Entity* e = new Entity();
    PrintName(e);
    //std::cout << e->GetName() << std::endl;

    Player* p = new Player("John");
    PrintName(p);

    //std::cout << p->GetName() << std::endl;

    Entity* entity = p;

    std::cin.get();
}