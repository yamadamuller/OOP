#include <iostream>
using namespace std;

class Room
{
    public:
    double length;
    double depth;
    double height;

    double calculateArea()
    {
        return length*depth;
    }

    double calculateVolume()
    {
        return length*depth*height;
    }
};

int main()
{
    Room room1; //cria um objeto chamado room1
    room1.length = 42.5;
    room1.depth = 30.8;
    room1.height = 19.2;

    cout << "Area of the room = " << room1.calculateArea() << endl;
    cout << "Volume of the room = " << room1.calculateVolume() << endl;

    return 0;
}