#include <iostream>
#include <cstring>

#include "yearFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR bool isLeapYear(int)
bool isLeapYear(int year)
{
  if ((year % 4) == 0)
    {
      return true;
    }
  else
    {
      return false;
    }
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR int getCenturyValue(int)
int getCenturyValue(int year)
{
  int centuryValue = 2 * (3 - ((year / 100) % 4));

  return centuryValue;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR int getYearValue(int)
int getYearValue(int year)
{
  int yearValue = (year % 100);
  yearValue += yearValue / 4;

  return yearValue;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR int getMonthValue(int)
int getMonthValue(int month, int year)
{
  if (isLeapYear(year) && (month  == 1))
    {
      return 6;
    }
  if (isLeapYear(year) && (month  == 2))
    {
      return 2;
    }

  switch(month)
    {
    case 1:
    case 10:
      return 0;
    case 2:
    case 3:
    case 11:
      return 3;
    case 4:
    case 7:
      return 6;
    case 5:
      return 1;
    case 6:
      return 4;
    case 8:
      return 2;
    case 12:
      return 5;
    }
  
  cerr << "The getMonthValue function reached a point it should never reach." << endl;
  return 999;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR int getDayValue(inT, int, int)
int getDayValue(int day, int month, int year)
{
  return (day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year)) % 7;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR getInput(int& day, int& month, int& year)
void getInput(int& day, int& month, int& year)
{
  char monthStr[15];

  cout << "Insert the date you wish to know the day for." << endl;
  cout << "Day:" << endl;
  cin >> day;
  cout << "Month (all lower-case):" << endl;
  cin.ignore();
  cin.getline(monthStr, 15);
  cout << "Year:" << endl;
  cin >> year;
  
  if (!strcmp(monthStr, "january"))
    {
      month = 1;
    }
  else if (!strcmp(monthStr, "february"))
    {
      month = 2;
    }
  else if (!strcmp(monthStr, "march"))
    {
      month = 3;
    }
  else if (!strcmp(monthStr, "april"))
    {
      month = 4;
    }
  else if (!strcmp(monthStr, "may"))
    {
      month = 5;
    }
  else if (!strcmp(monthStr, "june"))
    {
      month = 6;
    }
  else if (!strcmp(monthStr, "july"))
    {
      month = 7;
    }
  else if (!strcmp(monthStr, "august"))
    {
      month = 8;
    }
  else if (!strcmp(monthStr, "september"))
    {
      month = 9;
    }
  else if (!strcmp(monthStr, "october"))
    {
      month = 10;
    }
  else if (!strcmp(monthStr, "november"))
    {
      month = 11;
    }
  else if (!strcmp(monthStr, "december"))
    {
      month = 12;
    }
  else
    {
      cerr << "Something is wrong with the month that has been given!" << endl;
    }
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void postOutput(int&, int&, int&)
void postOutput(int& day, int& month, int& year)
{
  int dayValue;
  dayValue = getDayValue(day, month, year);

  cout << "The day of the week is";
  switch (dayValue)
    {
    case 0:
      cout << " Sunday." << endl;
      break;
    case 1:
      cout << " Monday." << endl;
      break;
    case 2:
      cout << " Tuesday." << endl;
      break;
    case 3:
      cout << " Wednesday." << endl;
      break;
    case 4:
      cout << " Thursday." << endl;
      break;
    case 5:
      cout << " Friday." << endl;
      break;
    case 6:
      cout << " Saturday." << endl;
      break;
    default:
      cout << " ...something went wrong with the calculations!" << endl;
    }
}
//END OF FUNCTION DEFINITION
