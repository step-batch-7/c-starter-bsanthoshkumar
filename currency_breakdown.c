#include <stdio.h>
int breakdown_currency(int);

int main()
{
  int amount;
  printf("> Enter the amount: ");
  scanf("%d",&amount);
  breakdown_currency(amount);
  return 0;
}

int breakdown_currency(int amount)
{
  printf("%d * Rs 2000\n", amount/2000);
  amount %= 2000;
  printf("%d * Rs 500\n", amount/500);
  amount %= 500;
  printf("%d * Rs 200\n", amount/200);
  amount %= 200;
  printf("%d * Rs 100\n", amount/100);
  amount %= 100;
  printf("%d * Rs 50\n", amount/50);
  amount %= 50;
  printf("%d * Rs 10\n", amount/10);
  amount %= 10;
  printf("%d * Rs 5\n", amount/5);
  amount %= 5;
  printf("%d * Rs 1\n", amount/1);
  return 0;
}