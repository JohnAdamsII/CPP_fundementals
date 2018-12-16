#include <iostream>
#include <string>


struct Vector3
{
    float x,y,z;

    Vector3()
        : x(10), y(11), z(12) {}
};


int main()
{
    {
        int value = 5; //stack memory
        int array[5];
        array[0] = 0;
        array[1] = 1;
        array[2] = 3;
        array[3] = 4;
        array[4] = 5;
        Vector3 vector;
    }

    int* heapvalue = new int; // heap memory
    *heapvalue = 5;
    int* harray = new int[5];
    harray[0] = 0;
    harray[1] = 1;
    harray[2] = 3;
    harray[3] = 4;
    harray[4] = 5;
    Vector3* hvector = new Vector3();

    delete heapvalue;
    delete[] harray;
    delete hvector;

}