#include <stdio.h>
#include <string.h>

// global variables
int id[5];
char name[5][30];
char father[5][30];
int age[5];
long long int accountNo[5];
long long int aadharNo[5];
int balance[5]; // Set initial balance to 500 for all

// Function declarations
void checkBalance();
int findAccount(long long int accNo);

int main()
{
    checkBalance();
    return 0;
}

// Function to check balance
void checkBalance()
{
    long long int accNo;
    int index;

    printf("Enter Account Number: ");
    scanf("%lld", &accNo);
    index = findAccount(accNo);

    if (index == -1)
    {
        printf("Account not found!\n");
        return;
    }

    printf("Account Holder: %s\n", name[index]);
    printf("Current Balance: %d\n", balance[index]);
}

// Function to find the account by account number
int findAccount(long long int accNo)
{
    for (int i = 0; i < 5; i++)
    {
        if (accountNo[i] == accNo)
        {
            return 0; // Found the account
        }
    }
    return -1; // Not found
}