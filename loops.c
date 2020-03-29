#include <stdio.h>
int factorial(int);
int fibonacci(int);
int odd_series(int);
int even_series(int);
int multiplication_table(int, int);
int odd_numbers_in_range(int, int);


int main()
{
  int number, length, number2;
  printf("> Enter a number to find factorial: ");
  scanf("%d",&number);
  printf(" Factorial of %d is %d\n", number, factorial(number));
  printf("> Enter a length to generate fibonacci series: ");
  scanf("%d",&number);
  fibonacci(number);
  printf("> Enter a number to find all numbers from 1: ");
  scanf("%d",&number);
  odd_series(number);
  even_series(number);
  printf("> Enter a number and range to generate multiplication table: ");
  scanf("%d%d",&number, &length);
  multiplication_table(number, length);
  printf("> Enter a two numbers to find all numbers b/w those two: ");
  scanf("%d%d",&number, &number2);
  odd_numbers_in_range(number, number2);
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
  printf("\n");
  return 0;
}

int odd_series(int end)
{
  printf(" odd numbers - ");
  for(int index = 1;index <= end;index++)
  {
    if(index % 2 != 0)
    {
      printf("%d ",index);
    }
  }
  printf("\n");
  return 0;
}

int even_series(int end)
{
  printf(" even numbers - ");
  for(int index = 1;index <= end;index++)
  {
    if(index % 2 == 0)
    {
      printf("%d ",index);
    }
  }
  printf("\n");
  return 0;
}

int multiplication_table(int number, int length)
{
  printf(" multiplication table\n");
  for(int index = 1;index <= length;index++)
  {
    printf("\t%d * %d = %d\n", number, index, number * index);
  }
  return 0;
}

int odd_numbers_in_range(int start, int end)
{
  printf(" odd numbers in between %d and %d - ", start, end);
  for(int index = start;index <= end;index++)
  {
    if(index % 2 != 0)
    {
      printf("%d ",index);
    }
  }
  printf("\n");
  return 0;
}