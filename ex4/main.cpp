#include <iostream>

using namespace std;

int main()
{
  int rows;
  cout << "How many rows of Pascal's triangle would you like to output?" << endl;
  cin >> rows;

  cout << " ";
  for (int i = 0, m = 0; i < rows; i++)
    {
      //output the right amount of spaces
      for (int k = (rows - m); k > 0; k--)
	{
	  cout << " ";
	  }

      int number = 1;
      for (int j = 0; j <= i; j++)
	{
	  cout << number << " ";
	  number = number * (i - j) / (j + 1);
	  m = j;
	}
      //next row
      cout<<endl;
    }

  return 0;
}
