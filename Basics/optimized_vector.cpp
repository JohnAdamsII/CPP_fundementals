#include <iostream>
#include <string>
#include <vector> // Dynamic Array

struct Vertex
{
    float x,y,z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z) {}
    
    Vertex(const Vertex& vertex)                  // Copy constructor
        : x(vertex.x), y(vertex.y), z(vertex.z)
        {
            std::cout << "Copied!" << std::endl;
        }
};

std::ostream &operator<<(std::ostream &stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main()
{
    std::vector<Vertex> vertices;
    vertices.reserve(3);    // stops extra coping due to repeated increased capacity
    vertices.emplace_back(1,2,3);  //emplace avoids coping by construct the vertice obj in the correct memory location 
    vertices.emplace_back(4,5,6);
    vertices.emplace_back(7,8,9);
}