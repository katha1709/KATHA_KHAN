#include <stdio.h>

int main() {
    int balance = 5000;
    int pin = 1234;
    int choice;
    int amount;
    int new_pin;

    printf("Welcome to the ATM simulator!\n");

    while (1) {
        printf("\nPlease enter your PIN: ");
        scanf("%d", &pin);

        if (pin != 1234) {
            printf("Invalid PIN!\n");
            continue;
        }

        printf("\nPlease select an option:\n");
        printf("1. View balance\n");
        printf("2. Withdraw money\n");
        printf("3. Deposit money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour balance is $%d\n", balance);
                break;

            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%d", &amount);

                if (amount > balance) {
                    printf("Insufficient funds!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful! Your new balance is $%d\n", balance);
                }

                break;

            case 3:
                printf("\nEnter amount to deposit: ");
                scanf("%d", &amount);

                balance += amount;
                printf("Deposit successful! Your new balance is $%d\n", balance);
                break;

            case 4:
                printf("\nEnter new PIN: ");
                scanf("%d", &new_pin);

                pin = new_pin;
                printf("PIN changed successfully!\n");
                break;

            case 5:
                printf("\nThank you for using the ATM simulator!\n");
                return 0;

            default:
                printf("\nInvalid option!\n");
                break;
        }
    }

    return 0;
}