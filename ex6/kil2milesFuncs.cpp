#include <iostream>
#include <cmath>

#include "kil2milesFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR  void inputMiles(double)
void inputKil(int& input1, double& input2)
{
  cout << "What would you like to convert (in kilometres and metres)?" << endl << "Kilometres:" << endl;
  cin >> input1;
  cout << "Metres:" << endl;
  cin >> input2;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR double calcMil(double)
void calcMil(int& miles, double& yards, int kilo, double metres)
{
  double totYards, totMet;
  totMet = metres + (kilo * 1000);
  totYards = totMet * 1.0936133;

  miles = static_cast<int>(totYards * 0.0006);
  yards = fmod(totYards, 0.0006);
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void (double)
void outputResultK(int mil, double yar)
{
  cout << "Converted, they are " << mil << " miles and " << yar << " yards." << endl;
}
//END OF FUNCTION DEFINITION
