#include <iostream>
#include <string>
#include <array>
#include <tuple>

//first way to deal with muti return values is it pass by reference

void EditStrings(std::string& str1, std::string& str2)
{
    str1 += "!";
    str2 += "!";
}

void EditStrings(std::string* str1, std::string* str2)
{
    if (str1 != nullptr)
        *str1 += "!";
    if (str2)
        *str2 += "!";
}

// as ARRAY
std::string* New_Strings(std::string str1, std::string str2)
{
    return new std::string[2] {str1 += '!', str2 += '!'};
}

// as std array
std::array<std::string,2> Better_New_Strings(std::string str1, std::string str2)
{
    return std::array<std::string,2> {str1 += '!', str2 += '!'};
}

// different var types use tubles or struct

std::tuple<int,std::string> Muti_types(int x, std::string str)
{
    return std::make_tuple(x+1,str += '!');
}

struct Data
{
    int number;
    std::string mystr; 
};

// With struct (BEST WAY)

Data Better_Muti_types(int x, std::string str)
{
    return { x+1 , str += '!'};
}


int main()
{
    std::string mystr = "Hey";
    std::string mystr1 = "Yo";
    
    //std::cout << mystr << std::endl;
    //std::cout << mystr1 << std::endl;
    
    //EditStrings(mystr,mystr1);
    //EditStrings(&mystr,&mystr1);
    //EditStrings(nullptr,nullptr);

    //std::array<std::string,2> arr = Better_New_Strings(mystr,mystr1);

    //std::cout << arr[0] << std::endl;
    //std::cout << arr[1] << std::endl;

    auto myvals = Muti_types(9,"Ay");
    //std::tuple<int,std::string> myvals = Muti_types(9,"Ay");
    std::cout << std::get<0>(myvals) << std::endl;
    std::cout << std::get<1>(myvals) << std::endl;

    Data mydata = Better_Muti_types( 68 , "Ayy");
    std::cout << mydata.number << std::endl;
    std::cout << mydata.mystr << std::endl;

     //std::cout << myvals.first << std::endl;
     //std::cout << myvals.second << std::endl; // can use first and second w/ std::pair

    //std::cout << mystr << std::endl;
    //std::cout << mystr1 << std::endl;
    
}