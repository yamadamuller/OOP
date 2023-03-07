#include <string>
#include <iostream>
using namespace std;

int main()
{
    string nome, sobrenome, completo;
    cout<<"Escreva seu primeiro nome: ";
    cin >> nome;
    cout << "Escreva seu sobrenome: ";
    cin >> sobrenome;

    if(nome==sobrenome)
    {
        cout << "Primeiro nome e sobrenome iguais!" << endl;
    }

    completo = nome + sobrenome;
    cout << "A concatenacao resulta em " << completo << " com " << completo.length() << " letras" << endl; 

    return EXIT_SUCCESS;
}