#include <iostream>
#include <vector>
using namespace std;

void addElems(vector<int>*vec, int len)
{
    for(int i = 0; i < len; i++)
    {
        vec->push_back(i);
    }
}

int main()
{
    vector<int>vec;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    addElems(&vec, 100); 
    cout << "Size (adding 100 elements): " << vec.size() << endl;
    cout << "Capacity (adding 100 elements): " << vec.capacity() << endl;

    vector<int>vec2(100);
    cout << "Size (vector of size 100): " << vec2.size() << endl;
    cout << "Capacity (vector of size 100): " << vec2.capacity() << endl;

    addElems(&vec2, 100);
    cout << "Size (adding 100 more elements at the end): " << vec2.size() << endl;
    cout << "Capacity (adding 100 more elements): " << vec2.capacity() << endl;

    vector<int>vec3;
    vec3.reserve(400);
    addElems(&vec3, 100);
    cout << "Size (reserving space for 400 && vector of size 100): " << vec3.size() << endl;
    cout << "Capacity (reserving space for 400 && vector of size 100): " << vec3.capacity() << endl;
}