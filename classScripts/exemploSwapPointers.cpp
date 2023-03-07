#include <iostream>
#include <vector>
using namespace std;

void intSwap(int *a, int *b)
{
    int auxVar = *b; //conteúdo de auxVar é o endereço
    *b = (int) *a;
    *a = auxVar;
}

int main()
{
    int numA = 21;
    int numB = 7;
    cout << "Antes de trocar: " << endl;
    cout << "numA = " << numA;
    cout << " numB = " << numB << endl;

    intSwap(&numA, &numB);
    cout << "Depois de trocar: " << endl;
    cout << "numA = " << numA;
    cout << " numB = " << numB << endl;
}