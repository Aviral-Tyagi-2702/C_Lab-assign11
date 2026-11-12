/*Write a C program using a static variable to generate a unique identification number every time a function is called.*/

#include <stdio.h>

void generateUniqueID() {
    static int uniqueID = 0;
    uniqueID++;
    printf("Generated Unique ID: %d\n", uniqueID);
}

int main() {
    generateUniqueID();
    generateUniqueID();
    generateUniqueID();
    return 0;
}
