/*Write a C program to demonstrate that an automatic variable is created when a block is entered and destroyed when the block is exited*/

#include <stdio.h>

int main() {
    printf("Entering the block...\n");
    {
        int automaticVariable = 10; 
        printf("Automatic variable value: %d\n", automaticVariable);
    } 
    printf("Exited the block.\n");
    
    return 0;
}