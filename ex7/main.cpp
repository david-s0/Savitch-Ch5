#include<iostream>

#include "shootFuncs.hpp"

using namespace std;

int main()
{
  //create and assign the shooting accuracy of the puzzlers
  double aaronAcc, bobAcc, charlieAcc;
  aaronAcc = 1.0/3.0;
  bobAcc = 1.0/2.0;
  charlieAcc = 1.0;

  //create and initialise the puzzlers
  bool aaronAlive = true, bobAlive = true, charlieAlive = true;

  //find out who won the duel
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < 1000; i++)
    {
      char winner = startDuel(aaronAlive, bobAlive, charlieAlive, aaronAcc, bobAcc, charlieAcc);
      switch(winner)
	{
	case 'a':
	  cout << "The winner is Aaron." << endl;
	  a++;
	  break;
	case 'b':
	  cout << "The winner is Bob." << endl;
	  b++;
	  break;
	case 'c':
	  cout << "The winner is Charlie." << endl;
	  c++;
	  break;
	default:
	  cerr << "An error seems to have occurred." << endl;
	}

      aaronAlive = true;
      bobAlive = true;
      charlieAlive = true;
    }

  cout << "Aaron won " << a << " times, " << " Bob " << b << " and Charlie " << c << "." << endl;

  return 0;
}
