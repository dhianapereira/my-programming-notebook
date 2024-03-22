#include <stdio.h>
#include <stdlib.h>
#include "bank_account.h"

int menu();

int main(){
    int quantity = 2, num_accounts = 0;
    BankAccount** accounts = (BankAccount**)malloc(quantity * sizeof(BankAccount*));
    if (accounts == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    while(1){
        int option = menu();
        switch (option) {
            case 0:
                printf("Exiting...\n");
                for (int i = 0; i < num_accounts; i++) {
                    freeMemory(accounts[i]);
                }
                free(accounts);
                return 0;
            case 1:
                if (num_accounts < quantity) {
                    int id;
                    double initial_value;
                    printf("Enter an ID:\n");
                    scanf("%d", &id);
                    printf("Enter an initial value:\n");
                    scanf("%lf", &initial_value);
                    accounts[num_accounts++] = create(id, initial_value);
                } else {
                    printf("The number of accounts has reached the limit\n");
                }
                break;
            case 2:
                int account_id;
                printf("Enter the account ID to see the balance:\n");
                scanf("%d", &account_id);
                for (int i = 0; i < num_accounts; i++) {
                    if (accounts[i]->id == account_id) {
                        printing(accounts[i]);
                        break;
                    }
                }
                break;
            case 3:
                int deposit_id;
                double deposit_value;
                printf("Enter the account ID to deposit:\n");
                scanf("%d", &deposit_id);
                int found_deposit_id = 0;
                for (int i = 0; i < num_accounts; i++) {
                    if (accounts[i]->id == deposit_id) {
                        found_deposit_id = 1;
                        printf("Enter the value to deposit:\n");
                        scanf("%lf", &deposit_value);
                        deposit(accounts[i], deposit_value);
                        break;
                    }
                }
                if (!found_deposit_id) {
                    printf("Account ID not found.\n");
                }
                break;

            case 4:
                int withdraw_id;
                double withdraw_value;
                printf("Enter the account ID to withdraw:\n");
                scanf("%d", &withdraw_id);
                int found_withdraw_id = 0; 
                for (int i = 0; i < num_accounts; i++) {
                    if (accounts[i]->id == withdraw_id) {
                        found_withdraw_id = 1;
                        printf("Enter the value to withdraw:\n");
                        scanf("%lf", &withdraw_value);
                        withdraw(accounts[i], withdraw_value);
                        break;
                    }
                }
                if (!found_withdraw_id) {
                    printf("Account ID not found.\n");
                }
                break;
            default:
                printf("Enter a valid option!\n");
                break;
        }
    }


    return 0;
}

int menu(){
    int option;
    printf("----------------------\n");
    printf("BANK\n\n");
    printf("----------------------\n");
    printf("(1) - Create a new account\n");
    printf("(2) - See balance\n");
    printf("(3) - To deposit\n");
    printf("(4) - To withdraw\n");
    printf("(0) - Exit\n");
    scanf("%d", &option);

    return option;
}