#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
    std::vector<int> values = {3,5,1,4,2};
    //std::sort(values.begin(),values.end());  // regular ascending sort
    
    // std::sort(values.begin(),values.end(),std::greater<int>()); // decesending order
    
    /* std::sort(values.begin(),values.end(), [](int a, int b) 
    {
        return a < b;  // regular ascending sort
    }); */

    std::sort(values.begin(),values.end(), [](int a, int b) 
    {
        // suppose we wanted 1 at the end 
        if (a==1) return false;
        if (b==1) return true;
        return a < b;
    });

    for (int value: values)
        std::cout << value << std::endl;

}