/*Write a C program to demonstrate that a global variable declared with static can be accessed only within the same source file.*/

#include <stdio.h>

static int globalVar = 10;

void printGlobalVar() {
    printf("Global Variable (static): %d\n", globalVar);
}

int main() {
    printGlobalVar();
    return 0;
}
