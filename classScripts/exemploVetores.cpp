#include <iostream>
#include <vector>
using namespace std;

void printVec(vector <int> vec, int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << "elemento [" << i << "] = " << vec[i] << endl;
    }
}

void printIterator(vector <int> vec)
{
    vector<int>::iterator it = vec.begin(); //aponta para o primeiro elemento
    while(it != vec.end()) //enquanto o iterador aponta para elementos do vetor
    {
        cout << "elemento [" << it - vec.begin() << "] = " << *it << endl;
        it += 1;
    }
}

int main()
{
    vector <int> vet1;

    cout << "Tamanho do vetor antes: " << vet1.size() << endl;

    for(int i = 0; i<5; i++)
    {
        vet1.push_back(i+10);
    }

    int vecSize = vet1.size();
    //printVec(vet1, vecSize);
    printIterator(vet1);
    cout << "Tamanho do vetor depois: " << vecSize << endl;

}