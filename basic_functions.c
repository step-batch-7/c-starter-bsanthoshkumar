#include <stdio.h>
#include <math.h>
unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int average_of_three(int, int ,int);
int find_greatest(int, int);
int greatest_of_three(int, int, int);
float simple_interest(int, float, float);
float compound_interest(int, float, float);
float convert_to_centigrade(float);

int main() {
  int num1, num2, num3, principal;
  float time, rateofinterest, temperature;
  // printf("> Enter a number: ");
  // scanf("%d",&num1);
  // printf(" %d is a %s number\n", num1, is_even(num1) ? "even" : "not even");
  // printf(" %d is a %s number\n", num1, is_odd(num1) ? "odd" : "not odd");
  // printf(" square of %d is a %d\n", num1, square(num1));
  // printf(" cube of %d is a %d\n", num1, cube(num1));
  // printf("> Enter three numbers: ");
  // scanf("%d%d%d",&num1, &num2, &num3);
  // printf(" Greatest of %d,%d,%d is %d\n",num1, num2, num3, greatest_of_three(num1, num2, num3));
  // printf(" Average of %d,%d,%d is %d\n",num1, num2, num3, average_of_three(num1, num2, num3));
  // printf("> Enter principal , time , rate of interest: ");
  // scanf("%d%f%f",&principal, &time, &rateofinterest);
  // printf(" simple interest is %f\n", simple_interest(principal, time, rateofinterest));
  // printf(" compound interest is %f\n", compound_interest(principal, time, rateofinterest));
  printf("> Enter fahrenheit temperature: ");
  scanf("%f",&temperature);
  printf("%fF is equal to %fC", temperature, convert_to_centigrade(temperature));
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

float simple_interest(int principal, float time, float rateofinterest) {
  return (principal * time * rateofinterest) / 100;
}

float compound_interest(int principal, float time, float rateofinterest) {
  return principal * pow(1 + (rateofinterest / time), time);
}

float convert_to_centigrade(float temperature) {
  return ((temperature - 32) * 5 / 9);
}