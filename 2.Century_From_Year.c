// Introduction
// The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

// Task
// Given a year, return the century it is in.

// Examples
// 1705 --> 18
// 1900 --> 19
// 1601 --> 17
// 2000 --> 20
#include <stdio.h>
#include <string.h>
#include <math.h>

int centuryFromYear(int year);

int main(void)
{
  int c = centuryFromYear(1900);

  printf("%d\n", c);
}

int centuryFromYear(int year)
{
  if ((year % 100) == 0)
    return year / 100;
  else
    return ceil((year / 100) + 1);

}