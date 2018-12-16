#include <iostream>
#include <string>


class Entity
{
    private:
    std::string m_Name;
    mutable int m_DebugCount = 0;

    public:

    const std::string& GetName() const
    {
        m_DebugCount++;     // marked mutable so const method can change
        return m_Name;
    }

};


int main()
{
    const Entity e;
    e.GetName();

    int x = 8;
    auto f = [=]() mutable       // can put &x or =x or just &/= to set all things but ref or value
                                // mark mutable so function can change variables passed by value
    {
        x++;
        std::cout << x << std::endl;
    };

    f();
    //x is still 8 here

    std::cin.get();
}