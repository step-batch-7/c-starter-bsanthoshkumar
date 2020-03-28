#include <stdio.h>
unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int average_of_three(int, int ,int);
int find_greatest(int, int);
int greatest_of_three(int, int, int);

int main() {
  int num1, num2, num3;
  printf("> Enter a number: ");
  scanf("%d",&num1);
  printf(" %d is a %s number\n", num1, is_even(num1) ? "even" : "not even");
  printf(" %d is a %s number\n", num1, is_odd(num1) ? "odd" : "not odd");
  printf(" square of %d is a %d\n", num1, square(num1));
  printf(" cube of %d is a %d\n", num1, cube(num1));
  printf("> Enter three numbers: ");
  scanf("%d%d%d",&num1, &num2, &num3);
  printf(" Greatest of %d,%d,%d is %d\n",num1, num2, num3, greatest_of_three(num1, num2, num3));
  printf(" Average of %d,%d,%d is %d\n",num1, num2, num3, average_of_three(num1, num2, num3));
  return 0;
}

unsigned char is_even(int number) {
  return number % 2 == 0;
}

unsigned char is_odd(int number) {
  return !is_even(number);
}

int square(int number) {
  return number * number;
}

int cube(int number) {
  return square(number) * number;
}

int average_of_three(int num1, int num2, int num3) {
  return (num1 + num2 + num3) / 3;
}

int find_greatest(int num1 , int num2) {
  return num1 > num2 ? num1 : num2;
}

int greatest_of_three(int num1, int num2, int num3) {
  return find_greatest(find_greatest(num1, num2), num3);
}