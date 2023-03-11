#include <iostream>
#include "MediaMovel.h"
#include <iomanip>
#include <iterator>
using namespace std;

MediaMovel::MediaMovel(double n_elem)
{
  n_elementos = n_elem;
}

// Alínea a)
void MediaMovel::update(double valor)
{
  valores.push_back(valor);
}

// Alínea b)
double MediaMovel::getMediaMovel() const
{
  double accSum = 0;
  if(valores.size() < n_elementos)
  {
    return 0;
  }
  else
  {
    list <double> :: const_iterator it;
    it = valores.begin();
    it = next(it,valores.size() - n_elementos);
    while(it != valores.end())
    {
      accSum += *it;
      it++;
    }

    return accSum/n_elementos;
  }
}

int main()
{
  {
    cout << "teste 1" << endl;
    MediaMovel mm(1);
    const MediaMovel &r = mm;
    mm.update(1.0);
    cout << fixed << setprecision(2) << r.getMediaMovel() << '\n';
  } 

  {
    cout << "teste 2" << endl;
    MediaMovel mm(1);
    double a[]{1.2, 3.4, 5.0};
    for (double x : a)
    {
      mm.update(x);
      cout << fixed << setprecision(2) << mm.getMediaMovel() << ' ';
    }
    cout << fixed << setprecision(2) << mm.getMediaMovel() << '\n';
  } 

  {
    cout << "teste 3" << endl;
    MediaMovel mm(2);
    double a[]{1.2, 3.4, 5.0};
    for (double x : a)
    {
      mm.update(x);
      cout << fixed << setprecision(2) << mm.getMediaMovel() << ' ';
    }
    cout << fixed << setprecision(2) << mm.getMediaMovel() << '\n';
  } 

  {
    cout << "teste 4" << endl;
    MediaMovel mm(3);
    double a[]{1.2, 3.4, 5.0};
    for (double x : a)
    {
      mm.update(x);
      cout << fixed << setprecision(2) << mm.getMediaMovel() << ' ';
    }
    cout << fixed << setprecision(2) << mm.getMediaMovel() << '\n';
  } 

  {
   cout << "teste 5" << endl;
    MediaMovel mm(4);
    double a[]{0.1, 1.2, -1.2, 3.4, 5.6, -2.3, 3.7};
    for (double x : a)
      mm.update(x);
    cout << fixed << setprecision(2) << mm.getMediaMovel() << '\n';
  } 

  return 0;
}
