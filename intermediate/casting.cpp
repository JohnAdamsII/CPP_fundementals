#include <iostream>

class Base 
{
    public:
        Base() {}
        virtual ~Base() {}
};

class Derived : public Base 
{
    public:
        Derived() { }
        ~Derived() { }
};

class AnotherClass: public Base 
{
    public:
        AnotherClass() { }
        ~AnotherClass() { }
};



int main()
{
    double value = 5.25;
    double a = (int)value + 5.3;

    double s = static_cast<int>(value) + 5.3;

    // types of casting
    // static, dynamic, const, reinterperate 
    // const casting can be used to add or remove const (mostly remove)
    // reinterperate is basically type punning
    // can also do C style casting

    Derived* derived = new Derived();
    Base* base = derived;

    AnotherClass* ac = dynamic_cast<AnotherClass*>(base);
    if (ac == NULL)
    {
        //do something
    }

    if (ac)
    {
        //we know base is an instance of another class
    }

}