#include "recfuncs.h"
#include <stdlib.h>

int calc_array_size(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return 2*calc_array_size(n-1);
  }
}
int convert_to_binary(int number)
{
  if (number == 0)
  {
      return 0;
  }
  else
  {
    return (number % 2 + 10 *convert_to_binary(number / 2));
  }
}
int* create_array(int size)
{
 int* array = (int*)malloc(sizeof(int)*calc_array_size(size));
 for (int i = 0; i < sizeof(calc_array_size(size)); i++)
 {
   array[i] = -1;
 }
 return array;
}

int calc_factorial(int n)
{
 if (n > 1)
 {
   return n * calc_factorial(n-1);
 }
 else
 {
   return 1;
 }
}
void calc_sums(int* nums,int size, int* out_arr, int* out_arr_bin)
{

}
CalculationResults perform_calculations(int* nums, int n)
{

}
