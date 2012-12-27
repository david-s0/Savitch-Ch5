#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a, b, c, delta;
  
  //get constants
  cout << "Value of a:" << endl;
  cin >> a;
  cout << "Value of b:" << endl;
  cin >> b;
  cout << "Value of c:" << endl;
  cin >> c;
  cout << "The quadratic equation you are trying to solve is: " << a << "x^2 + " << b << "x + " << c << "." << endl;

  //calculate discriminant
  delta = (b * b) - (4 * a * c);
  cout << "Its discriminant is " << delta << "." << endl;
  
  //select the right type of answer and output it
  if (delta == 0)
    {
      cout << "The solution is " << -(b / (2 * a)) << endl;
    }
  if (delta > 0)
    {
      cout << "The solutions are " << ((-b + sqrt(delta)) / (2 * a)) << " and " << ((-b - sqrt(delta)) / (2 * a)) << "." << endl;
    }
  if (delta < 0)
    {
      cout << "The solutions are " << -b / (2 * a) << " + i" << sqrt(-delta) / (2 * a) << " and " << -b / (2 * a) << " - i" << sqrt(-delta) / (2 * a) << "." << endl;
    }

  return 0;
}
