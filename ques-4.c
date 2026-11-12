/*Write a C program using a static local variable to count how many times a function has been called.*/

#include <stdio.h>
void countFunctionCalls() {
  
    static int count = 0;
    count++; 
    printf("Function has been called %d times.\n", count);
}

int main() {
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}