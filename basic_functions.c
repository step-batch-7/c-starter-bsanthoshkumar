#include <stdio.h>
int is_even(int);
int is_odd(int);
int square(int);
int cube(int);

int main(){
  int number;
  printf("> Enter a number: ");
  scanf("%d",&number);
  printf(" %d is a %s number\n", number, is_even(number) ? "even" : "not even");
  printf(" %d is a %s number\n", number, is_odd(number) ? "odd" : "not odd");
  printf(" square of %d is a %d\n", number, square(number));
  printf(" cube of %d is a %d\n", number, cube(number));
  return 0;
}

int is_even(int number) {
  return number % 2 == 0;
}

int is_odd(int number) {
  return !is_even(number);
}

int square(int number) {
  return number * number;
}

int cube(int number) {
  return square(number) * number;
}