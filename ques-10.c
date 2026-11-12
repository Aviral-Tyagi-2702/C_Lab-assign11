/*Create a two-file C program for managing a bank balance. The balance must be accessible only through functions, using static and extern appropriately.*/

// File 1: bank.c
#include <stdio.h>

static float balance = 0.0; // Static variable to hold the bank balance

void deposit(float amount) {
    if (amount > 0) {
        balance += amount;
        printf("Deposited: %.2f\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

void withdraw(float amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrew: %.2f\n", amount);
    } else {
        printf("Invalid withdrawal amount or insufficient funds.\n");
    }
}

float getBalance() {
    return balance;
}

// File 2: main.c
#include <stdio.h>

int main() {
    deposit(100.0);
    withdraw(50.0);
    printf("Current balance: %.2f\n", getBalance());
    return 0;
}