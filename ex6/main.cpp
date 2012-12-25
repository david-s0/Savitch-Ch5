#include "miles2kilFuncs.hpp"

using namespace std;

int main()
{
  int mil, kil;
  double yar, met;
  
  inputMiles(mil, yar);
  calcKil(mil, yar, kil, met);
  outputResult(kil, met);

  return 0;
}
