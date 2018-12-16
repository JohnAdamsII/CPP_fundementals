 #include <iostream>
 #include <string>


 int main()
 {
     
     std::string str = "John\0";

     const char* name = "John"; //UTF-8
     name[2] = 'a';  // BAD this is trying to write to read only memory

     //correct way
     char new_name[] = "John";
     new_name[2] = 'a';

     const char16_t* name2 = u"John"; //2 byte string
     const char32_t* name2 = U"John"; //4 byte string

    const char* example = R"(Line1
    Line2
    Line3
    Line4)";


     std::cin.get();
 }