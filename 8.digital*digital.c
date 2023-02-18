#include <stdio.h>
#include <string.h>
#include <stdlib.h>


unsigned long long square_digits (unsigned n)
{
  unsigned long long result = 0;
  unsigned long long mul = 1;
  while (n != 0){
    result += (n % 10) * (n % 10) * mul;
    mul*= (n % 10 <= 3)? 10: 100;
    n /= 10;
  }

  return result;
}