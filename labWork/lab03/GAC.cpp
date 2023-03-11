#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Aluno
{
public: // Porque e', para ja', importante? Experimente comentar a linha...
  string nome;
  string curso;
  int numero;
  float media;
  
  //letra a
  Aluno(string nom)
  {
    nome = nom;
    curso = "";
    numero = 0;
    media = 0; 
  }

  Aluno(string nom, string cur, int num)
  {
    nome = nom;
    curso = cur;
    numero = num; 
    media = 0;
  }
  
  //letra b
  void setCurso(string cur) 
  {
    curso = cur;
  }

  void setNum(int num) 
  {
    numero = num;
  }

  void setMedia(float med) 
  {
    media = med;
  }

  string getCurso() const
  {
    return curso;
  }

  int getNum() const
  {
    return numero;
  }

  float getMedia() const
  {
    return media;
  }

  //letra c
  void imprimirAluno (ostream & out) const
  {
    cout << "<" << nome << "> " << "<" << curso << "> " << "<" << numero << "> " << "<" << media << ">" << endl;
  }

  string sigla() const
  {
    vector <char> capNome;
    for(int i = 0; i < nome.length(); i++)
    {
      char letra = nome.at(i);
      if(isupper(letra))
      {
        capNome.push_back(letra);
      }
    }
    
    string charConvert(capNome.begin(),capNome.end());
    return charConvert;
  }
};

int main()
{

  //letra a
  Aluno a1("Pedro Ferreira");
  Aluno a2("Ana Martins", "Direito", 2022045);
  Aluno a3("Manuel Silva", "Arquitetura", 2021033);
  cout << "Lista de alunos original: (nome | curso | numero | media)" << endl;
  cout << "\t" << a1.nome << "\t| " << a1.curso << "\t| " << a1.numero << "\t| " << a1.media << endl;
  cout << "\t" << a2.nome << "\t| " << a2.curso << "\t| " << a2.numero << "\t| " << a2.media << endl;
  cout << "\t" << a3.nome << "\t| " << a3.curso << "\t| " << a3.numero << "\t| " << a3.media << endl;
  
  //letra b
  a2.setCurso("Medicina");
  a2.setNum(2020123);
  a2.setMedia(6.5);
  a3.setCurso("Engenharia");
  a3.setNum(2020456);
  a3.setMedia(4.3);
  cout << "Lista de alunos modificada: (nome | curso | numero | media)" << endl;
  cout << "\t" << a1.nome << "\t| " << a1.curso << "\t| " << a1.numero << "\t| " << a1.media << endl;
  cout << "\t" << a2.nome << "\t| " << a2.curso << "\t| " << a2.numero << "\t| " << a2.media << endl;
  cout << "\t" << a3.nome << "\t| " << a3.curso << "\t| " << a3.numero << "\t| " << a3.media << endl;

  //letra c
  Aluno al("Alberto Mateus", "Engenharia", 2019197); 
  al.imprimirAluno(cout);

  //letra d
  Aluno al2("Pedro Antunes Rocha"); 
  cout << "Sigla do aluno " << al2.nome << ": " << al2.sigla() << endl;

  return 0;
}
