#include <stdio.h>
int isEven(int);

int main(){
  int number;
  printf("> Enter a number: ");
  scanf("%d",&number);
  printf(" %d is a %s number\n", number, isEven(number) ? "even" : "not even");
  return 0;
}

int isEven(int number) {
  return number % 2 == 0;
}