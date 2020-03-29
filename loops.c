#include <stdio.h>
int factorial(int);
int fibonacci(int);

int main()
{
  int number;
  printf("> Enter a number to find factorial: ");
  scanf("%d",&number);
  printf(" Factorial of %d is %d\n", number, factorial(number));
  printf("> Enter a length to generate fibonacci series: ");
  scanf("%d",&number);
  fibonacci(number);
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

int fibonacci(int length)
{
  int term1 = 0, term2 = 1;
  printf(" Fibonacci series - ");
  for(int index = 1;index <= length;index++)
  {
    printf("%d ", term1);
    int temp = term2;
    term2 += term1;
    term1 = temp;
  }
  return 0;
}