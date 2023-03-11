#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

void print(list<string>& container) 
{
  int pos = 0;
  for (string x: container)
  {
    cout << "Pos " << pos << "-> " << x << " " << endl;
    pos++;
  }
  
  cout << endl;
}

int listInsert(string file, list<string> &lst)
{
  ifstream inputFile(file); 
  if(!inputFile)
  {
    return -1; 
  }
  else
  {
    int counter = 0; 
    string linha;
    while(getline(inputFile, linha)) 
    {
      lst.push_back(linha);
      counter += 1; 
    }

    inputFile.close();
    return 0;
  }
}

int wordFinder(string word, list<string> &lst)
{
  list <string> :: iterator it2;
  it2 = lst.begin();
  while(it2 != lst.end())
  {
    string str = *it2;
    int idx = str.find(word);
    if(idx != -1)
    {
      lst.erase(it2--); 
    }
    it2++;
  }
  
  return 0;
}

int main()
{
  // a) criar a lista 
  list <string> lst_jogos;

  // b) inserir jogos na lista
  listInsert("arquivo.txt", lst_jogos);

  // c) imprimir tamanho da lista
  cout << "Foram carregados " << lst_jogos.size() << " jogos." << endl;

  // d) imprimir conteúdo da lista
  //cout << "Conteúdo da Lista:" << endl;
  print(lst_jogos);

  // e) ordenar lista e imprimir
  cout << "\nLista Ordenada:" << endl;
  lst_jogos.sort();
  print(lst_jogos);

  // f) remover "Mario Kart (Wii)" e imprimir
  cout << "Lista sem o jogo Mario Kart (Wii):" << endl;
  list <string> :: iterator it;
  it = find(lst_jogos.begin(), lst_jogos.end(), "Mario Kart (Wii)");
  lst_jogos.erase(it);
  print(lst_jogos);
  
  // g) remover jogos PS2 e imprimir
  cout << "\nLista sem jogos da PS2:" << endl;
  wordFinder("PS2", lst_jogos);
  print(lst_jogos);

  return 0;
}
