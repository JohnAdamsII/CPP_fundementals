#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>







int main()
{
    int a = 5;
    auto b = 5;


    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Orange");

    for(std::vector<std::string>::iterator it = strings.begin();
        it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }

      for(auto it = strings.begin(); it != strings.end(); it++)
        std::cout << *it << std::endl;
    
}