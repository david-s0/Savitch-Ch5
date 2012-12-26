#include <cstdlib> 

#include "shootFuncs.hpp"

//START FUNCTION DEFINITION FOR void shoot(bool&, double)
void shoot(bool& targetAlive, double accuracy)
{
  double chance;
  chance = static_cast<double>((rand() % 10)) / 10;

  if (chance < accuracy)
    {
      targetAlive = false;
    }
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR char startDuel(bool&, bool&, bool&, double, double, double)
char startDuel(bool& target1, bool& target2, bool& target3, double acc1, double acc2, double acc3)
{
  char winner;
  
  //while at least two are alive
  for (int i = 1, j = 0; (target1 && (target2 || target3)) || (target2 && (target1 || target3)) || (target3 && (target1 || target2)); i++, j++)
    {
      //aaron
      if ((i == 1) && target1)
	{
	  if (j == 1)
	    {
	      continue;
	    }
	  else
	    {
	      if (target3)
		{
		  shoot(target3, acc1);
		}
	      else
		{		  shoot(target2, acc1);
		  if (!target2)
		    {
		      winner = 'a';
		      break;
		    }
		}
	    }
	}

      //bob
      if ((i == 2) && target2)
	{
	  if (target3)
	    {
	      shoot(target3, acc2);
	    }
	  else
	    {
	      shoot(target1, acc2);
	      if (!target1)
		{
		  winner = 'b';
		  break;
		}
	    }
	}

      //charlie
      if ((i == 3) && target3)
	{
	  if (target2)
	    {
	      shoot(target2, acc3);
	    }
	  else
	    {
	      shoot(target1, acc3);
	      if (!target1)
		{
		  winner = 'c';
		  break;
		}
	    }
	}

      if (i == 3)
	{
	  i = 1;
	}

    }
  return winner;
}
//END OF FUNCTION DEFINITION
