#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string mystring;
  float price=0;
  int quantity=0;

  cout << "Introduce precio: ";
  getline (cin,mystring);
  stringstream(mystring) >> price;
  cout << "Introduce quantity: ";
  getline (cin,mystring);
  stringstream(mystring) >> quantity;
  cout << "Precio final: " << price*quantity << endl;
  return 0;
}