#include <stdio.h>
int factorial(int);
int fibonacci(int);
int odd_series(int);
int even_series(int);
int multiplication_table(int, int);
int odd_numbers_in_range(int, int);
int odd_series_reverse(int);
int sum_of_even_numbers_in_range(int, int);
int every_nth_number_in_range(int, int);


int main()
{
  int number1, number2;
  printf("> Enter a number to find factorial: ");
  scanf("%d",&number1);
  printf(" Factorial of %d is %d\n", number1, factorial(number1));
  printf("> Enter a length to generate fibonacci series: ");
  scanf("%d",&number1);
  fibonacci(number1);
  printf("> Enter a number to find all numbers from 1: ");
  scanf("%d",&number1);
  odd_series(number1);
  even_series(number1);
  printf("> Enter a two numbers to find all numbers b/w those two: ");
  scanf("%d%d",&number1, &number2);
  odd_numbers_in_range(number1, number2);
  sum_of_even_numbers_in_range(number1, number2);
  printf("> Enter a numbers to find all odd numbers from number to 1: ");
  scanf("%d",&number1);
  odd_series_reverse(number1);
  printf("> Enter a number and range to generate multiplication table: ");
  scanf("%d%d",&number1, &number2);
  multiplication_table(number1, number2);
  printf("> Enter a two numbers to find nth number: ");
  scanf("%d%d",&number1, &number2);
  every_nth_number_in_range(number1, number2);
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

int odd_series_reverse(int number)
{
  printf(" odd numbers - ");
  for(int index = number;index >= 1;index--)
  {
    if(index % 2 != 0)
    {
      printf("%d ",index);
    }
  }
  printf("\n");
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

int sum_of_even_numbers_in_range(int start, int end)
{
  int sum = 0;
  for(int index = start;index <= end;index++)
  {
    if(index % 2 == 0)
    {
      sum += index;
    }
  }
  printf(" sum of even numbers in between %d and %d is %d\n",start, end, sum);
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

int every_nth_number_in_range(int start, int end)
{
  int number;
  printf("> Enter nth value: ");
  scanf("%d", &number);
  printf("All %dth numbers in between %d and %d - ",number, start, end);
  for(int index = start + number;index <= end;index += number) {
    printf(" %d", index);
  }
  printf("\n");
  return 0;
}
