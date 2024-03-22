#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

typedef struct bank_account{
    int id;
    double balance;
} BankAccount;

BankAccount* create(int id, double value);
void printing(BankAccount *account);
int deposit(BankAccount *account, double value);
int withdraw(BankAccount *account, double value);
void freeMemory(BankAccount *account);

#endif