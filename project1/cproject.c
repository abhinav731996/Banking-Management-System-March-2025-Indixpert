#include<stdio.h>

int main()
{
int choice,id,age,number;
char name[50];
int contact;

printf("Press 1 to create account\n");
printf("Press 2 to deposit\n");
printf("Press 3 to withdraw\n");
printf("Press 4 to check balance\n");
printf("Press 5 toexit\n");

printf("Please Enter your choice : ");
scanf("%d",&choice);

swith(choice)
{
    case 1:
    printf("Create Account\n");

    printf("Enter your name : ");
    scanf("%[^\n]",&name);

    printf("Enter Account Number : ");
    scanf("%d",&number);
    
    printf("Enter your ID :");
    scanf("%d",&id);

    printf("\nAccount successfully created\n");

    printF("Name : %s\n",name);
    printf("Contact number : %d\n",contact);
    printf("Age : %d\n",age);
    printf("Account Number : %d\n",number);
    printf("ID : %d\n",id);
    break;

    case 2:
    printf("Deposit\n");
      // Add logic here
    break;
    case 3:
    printf("Withdraw\n");
     // Add logic here
    break;
    case 4:
    printf("Check Balance\n");
    // Add logic here
    case 5:
    printf("Exit\n");
    break;

    default:
    printf("Invalid Choice\n");
}

return 0;

}