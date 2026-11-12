/*Write a C program using two source files to demonstrate the use of extern for accessing a global variable.*/

// File 1: main.c
#include <stdio.h>

int globalVar;

int main() {
    globalVar = 10; 
    printf("In main.c: %d\n", globalVar);
    return 0;
}
