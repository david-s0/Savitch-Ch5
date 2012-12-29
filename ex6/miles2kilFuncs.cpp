#include <iostream>
#include <cmath>

#include "miles2kilFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR  void inputMiles(double)
void inputMiles(int& input1, double& input2)
{
  cout << "What would you like to convert (in miles and yards)?" << endl << "Miles:" << endl;
  cin >> input1;
  cout << "Yards:" << endl;
  cin >> input2;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR double calcKil(double)
void calcKil(int miles, double yards, int& kilo, double& metres)
{
  double totYards, totMet;
  totYards = yards + (miles / 0.0006);
  totMet = totYards * 0.9144;
  
  kilo = 0;

  kilo = static_cast<int>(totMet / 1000);
  metres = fmod(totMet, 1000);

}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void (double)
void outputResult(int kil, double met)
{
  cout << "Converted, they are " << kil << " kilometres and " << met << " metres." << endl;
}
//END OF FUNCTION DEFINITION
