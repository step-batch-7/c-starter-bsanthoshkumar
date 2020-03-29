#include <stdio.h>
int factorial(int);

int main()
{
  int number;
  printf("> Enter a number: ");
  scanf("%d",&number);
  printf(" Factorial of %d is %d\n", number, factorial(number));
}

int factorial(int number)
{
  int result = 1;
  for(int index = 1;index <= number;index++)
  {
    result *= index;
  }
  return result;
}