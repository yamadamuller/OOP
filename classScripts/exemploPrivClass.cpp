#include <iostream>
using namespace std;

class Room
{
    private:
    double length;
    double depth;
    double height;

    public:
    void initData(double len, double dpth, double hgt)
    {
        length = len;
        depth = dpth;
        height = hgt;
    }

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
    Room room1; //cria objeto room1
    room1.initData(42.5,30.8,19.2);

    cout << "Area of the room = " << room1.calculateArea() << endl;
    cout << "Volume of the room = " << room1.calculateVolume() << endl;

    return 0;
}