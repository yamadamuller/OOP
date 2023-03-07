#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int>vet)
{
    cout << "Vetor: ";
    for(int i = 0; i < vet.size(); i++)
    {
        cout << vet[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int>vet{10,20,30,40,50};
    vector<int>::iterator it = vet.begin();
    it += 1;
    printVec(vet);
    cout << "Capacidade do vetor: " << vet.capacity() <<endl;

    vet.insert(it, 15); //insere 15 na posição que it aponta (nesse caso [1])
    printVec(vet);
    cout << "Capacidade do vetor: " << vet.capacity() <<endl;

    int findElem = 40;
    it = find(vet.begin(), vet.end(), findElem);
    if(it != vet.end())
    {
        cout << "Elemento " << findElem << " encontrado em [" << it - vet.begin() <<"]";
        cout << endl;
    }
    else
    {
        cout << "Elemento não pode ser encontrado";
    }

    vet.insert(it, 2, 21);
    printVec(vet);

    vet.erase(it);
    printVec(vet);

    findElem = 20;
    it = find(vet.begin(), vet.end(), findElem);
    vet.erase(it, it+3);
    printVec(vet);
}