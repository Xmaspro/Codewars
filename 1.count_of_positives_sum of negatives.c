// Given an array of integers.

// Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

// If the input is an empty array or is null, return an empty array.

// Example
// For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].


#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum)
{
  // Please store the positives count in the memory, pointed to
  // by the positivesCount parameter.

  // Please store the negatives sum in the memory, pointed to
  // by the negativesSum parameter.

    for (int i = 0; i < count; i++){
      if (*(values + i) > 0) *positivesCount += 1;
      else if (*(values + i) < 0) *negativesSum += *(values + i);
    }
}