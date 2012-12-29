#include<iostream>

#include "miles2kilFuncs.hpp"
#include "kil2milesFuncs.hpp"

using namespace std;

int main()
{
  int mil, kil, choice;
  double yar, met;
  
  cout << "Press 1 if you wish to convert miles into kilometres and 2 if you wish to convert kilometres into miles." << endl;
  cin >> choice;

  if (choice == 1)
    {
      inputMiles(mil, yar);
      calcKil(mil, yar, kil, met);
      outputResult(kil, met);
    }
  else if (choice == 2)
    {
      inputKil(kil, met);
      calcMil(mil, yar, kil, met);
      outputResultK(mil, yar);
    }
  else 
    {
      cerr << "Your choice is invalid." << endl;
    }

  return 0;
}
