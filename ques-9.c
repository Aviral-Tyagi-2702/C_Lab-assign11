/*Write a C program using two source files in which one source file defines a global variable and another source file modifies it using extern.*/

#include <stdio.h>

int globalVar; 

int main() {
    globalVar = 10; 
    printf("In main.c: %d\n", globalVar);
    return 0;
}
