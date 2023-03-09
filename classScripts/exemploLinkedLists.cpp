#include <iostream>
#include <iterator>
#include <list>
using namespace std;

void printList(int id, const list<int>& container)
{
    cout << id << ". ";
    for(const int x: container)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    list <int> c1(3,100);
    printList(1,c1);

    auto it = c1.begin();
    it = c1.insert(it,200);
    printList(2,c1);
    c1.insert(it,2,300);
    printList(3,c1);
    
    it = c1.begin();
    //cout << *it << endl;
    list<int> c2(2, 400);
    c1.insert(next(it, 2), c2.begin(), c2.end());
    printList(4, c1);
}