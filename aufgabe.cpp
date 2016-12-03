#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  cout << "Geben Sie bitte die Länge von zwei Seiten eines Dreiecks ein: ";
  double a = 0;
  double b = 0;
  cin >> a;
  cin >> b;

  cout << "Geben Sie bitte den eingeschlossenen Winkel des Dreiecks ein: ";
  double y = 0;
  cin >> y;
  
  double c = 0;
  c = sqrt((a*a) + (b*b) - (2*a*b*(cos(y))));

  cout << "Die Lange der dritten Seite ist: \n";
  cout << c << '\n';

  return 0;
}
