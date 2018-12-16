#include <iostream>
#include <memory>

class Entity
{
    public:
        Entity()
        {
            std::cout << "Created Entity!" << std::endl; 
        }

        ~Entity()
        {
            std::cout << "Destroyed Entity!" << std::endl; 
        }

        void Print() {}
};



int main()
{
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        // std::unique_ptr<Entity> e0 = entity; not allowed w/ unique_ptr
        entity->Print();

        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        // shared keeps a reference count and frees memory when all refs gone
    }

}