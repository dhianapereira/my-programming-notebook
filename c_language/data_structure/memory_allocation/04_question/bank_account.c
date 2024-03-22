#include <stdio.h>
#include <stdlib.h>
#include "bank_account.h"

BankAccount* create(int id, double value){
    BankAccount* account = (BankAccount*)malloc(sizeof(BankAccount));
    account->id = id;
    account->balance = value;
    return account;
}

void printing(BankAccount *account){
    printf("Account Info\n");
    printf("ID: %d\n", account->id);
    printf("Balance: %.2lf\n", account->balance);
}

int deposit(BankAccount *account, double value){
    if(value <= 0 ){
        printf("You need to enter a valid value\n");
        return 1;
    }

    account->balance += value;
    printf("Deposit successfully completed\n");
    return 0;
}

int withdraw(BankAccount *account, double value){
    if(value <= 0 ){
        printf("You need to enter a valid value\n");
        return 1;
    }


    account->balance -= value;
    printf("Withdraw successfully completed\n");
    return 0;
}


void freeMemory(BankAccount *account){
    free(account);
    printf("Free memory...\n");
}