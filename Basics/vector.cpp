#include <iostream>
#include <string>
#include <vector> // Dynamic Array

struct Vertex
{
    float x,y,z;
};

std::ostream &operator<<(std::ostream &stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main()
{
    //Vertex vertices[5]; // stack 
    //Vertex* vertices = new Vertex[5]; // heap

    std::vector<Vertex> vertices;
    vertices.push_back({1,2,3});
    vertices.push_back({4,5,6});

    for (int i = 0; i < vertices.size(); i++)
    {
        std::cout << vertices[i] << std::endl;
    }

    for (Vertex& v : vertices)
        std::cout << v << std::endl;

    //vertices.clear();
    //vertices.erase(vectices.begin()+1); // removes vertices[1]

}