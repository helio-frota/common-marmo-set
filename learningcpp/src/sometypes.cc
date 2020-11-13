#include <iostream>

using namespace std;

int main() {
  int beers = 4;
  cout << "number of beers: " << beers << endl;

  long int bignumber = 976543143213541321;
  cout << bignumber << endl;

  short int smallnumber = 456;
  cout << smallnumber << endl;

  unsigned int uvalue = 1;
  cout << uvalue << endl;

  string value = "test strings";
  cout << value << endl;

  cout << "size of int: " << sizeof(int) << " bytes" << endl;
  cout << "size of short int: " << sizeof(short int) << " bytes" << endl;
  cout << "size of long int: " << sizeof(long int) << " bytes" << endl;
  cout << "size of float: " << sizeof(float) << " bytes" << endl;
  cout << "size of double: " << sizeof(double) << " bytes" << endl;
  cout << "size of long double: " << sizeof(long double) << " bytes" << endl;

  float fvalue = 11.2;
  cout << fvalue << endl;
  cout << fixed << fvalue << endl;
  cout << scientific << fvalue << endl;

  double dvalue = 45.3289;
  cout << dvalue << endl;
  cout << fixed << dvalue << endl;
  cout << scientific << dvalue << endl;

  long double ldvalue = 234.128390180891023;
  cout << ldvalue << endl;
  cout << fixed << ldvalue << endl;
  cout << scientific << ldvalue << endl;

  bool bvaluefalse = false;
  cout << "the false is: " << bvaluefalse << endl;
  bool bvaluetrue = true;
  cout << "the true is: " << bvaluetrue << endl;

  char cvalue = 55;
  cout << cvalue << endl;
  char cvalueseven = '7';
  cout << cvalue << endl;

  wchar_t wvalue = 'h';
  cout << wvalue << endl;

  string input;
  cout << "write something: " << endl;
  cin >> input;
  cout << "you entered: " << input << endl;

  return 0;
}