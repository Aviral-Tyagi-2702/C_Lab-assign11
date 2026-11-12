/*Write a C program that calls the same function several times and compares the behaviour of an automatic variable with a static variable.*/

#include <stdio.h>
void compare()
{
  auto int a =0;
  static int b =0;
  a++;
  b++;
  printf("Automatic variable a = %d, Static variable b = %d\n", a, b);
}

int main()
{
  compare();
  compare();
  compare();
  return 0;
}