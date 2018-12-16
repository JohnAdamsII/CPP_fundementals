#include <iostream>
#include <string>


class Entity
{
    private:
        std::string m_Name;
        int m_Score;
    public:
        Entity()
            : m_Name("Unknown"), m_Score(0) {}
   
        Entity(std::string name, int Score) 
            : m_Name(name), m_Score(Score) {}

        const std::string& GetName() const { return m_Name; }
};

int main()
{
    Entity e;
    std::cout << e.GetName() << std::endl;

    Entity e1("John",0);
    std::cout << e1.GetName() << std::endl;

    std::cin.get();
}