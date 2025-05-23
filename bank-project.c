#include <stdio.h>

int main() {
    int choice, id , age , number ;
    int balance ;
    int depositAmount, withdrawAmount;
    char name[50] , contact[15] ;
    int accountCreated = 0; 

    while (1) {
       
        printf("Press 1 to Create Account\n");
        printf("Press 2 to Deposit\n");
        printf("Press 3 to Withdraw\n");
        printf("Press 4 to Check Balance\n");
        printf("Press 5 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n create Account \n");

                printf("enter your name: ");
                scanf(" %[^\n]", name);

                printf("enter your contact number: ");
                scanf(" %s", contact);

                printf("enter your age: ");
                scanf("%d", &age);

                printf("enter account number: ");
                scanf("%d", &number);

                printf("enter your ID: ");
                scanf("%d", &id);

               

                printf("\naccount Created uccessfully\n");
                printf("Name: %s\n", name);
                printf("Contact: %s\n", contact);
                printf("Age: %d\n", age);
                printf("Account Number: %d\n", number);
                printf("ID: %d\n", id);
                printf("your balance =0");
                printf("please deposite money");
                
                break;

            case 2:
                
                printf("\nDeposit\n");
                printf("Enter amount to deposit: ");
                scanf("%d", &depositAmount);
                if (depositAmount > 499) {
                   
                    printf("deposited successfully.\n");
                    printf("Current Balance: %d\n", balance);
                } else {
                    printf("invalid amount.\n");
                }
                break;

            case 3:
               
                printf("\n withdraw \n");
                printf("enter amount to withdraw: ");
                scanf("%d", &withdrawAmount);
                if (withdrawAmount <=500 && withdrawAmount<100000 ) {
                   
                    printf("withdrawal successful.\n");
                    printf("remaining balance: %d\n", balance);
                } else {
                    printf("invalid or insufficient amount.\n");
                }
                break;

            case 4:
               
                printf("\ncheck Balance\n");
                printf("Current Balance: %d\n", balance);
                break;

            case 5:
                printf("\nyou are exit\n");
                return 0;

            default:
                printf("invalid choice. Please try again.\n");
        }
    }

    return 0;
}                   