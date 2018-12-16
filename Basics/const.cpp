#include <iostream>
#include <string>



class Entity
{
    private:
        int m_X, m_Y;
        mutable int var;
        // int* test, *test1;  to make both pointers
    public:
        int GetX() const   // const after method means it would change data
        {
            var = 2; // can change data if data is marked mutable 
            return m_X;
        }

        void SetX(int x)
        {
            m_X = x;
        }

};




int main()
{
    const int MAX_LENGTH = 90;
    
    int* a = new int; // Heap allocated
    
    const int* b = new int; // can change address where it points but can't change data at address
    int* const c = new int; // cant change address where it points but can change data at address

    int const* d = new int;    //same thing
    const int* d = new int;

    *a = 2;
    a = (int*)&MAX_LENGTH; // break const
    std::cout << *a << std::endl;
    delete a;
    std::cin.get();


    // testing
    int test = 7;
    int test1 = 8;

    const int* ptr = new int;     // these 2 lines are the same
    int const* ptr1 = new int;

    ptr = &test;
    ptr = &test1;
    ptr = nullptr;

    ptr1 = &test;
    ptr1 = nullptr;
 
    //*ptr = 15;   // can change address not data

    int* const ptr2 = new int;

    //ptr2 = nullptr;
    //ptr2 = &test; 
    *ptr2 = 10; // can change data not address;

    const int* const f = new int; // cant change address or data

    // const before *int means can't change data
    // const after int*  means can't change address



}