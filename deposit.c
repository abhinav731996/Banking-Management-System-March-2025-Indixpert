#include <stdio.h>
#include <string.h>

void deposit();

int main()
{
    deposit();
    return 0;
}

void deposit()
{
    int amount[1000]; 
    int i = 0;       

    while (1)
    {
        int temp;
        printf("Deposit your  money\n");
        printf("Enter amount ");
        scanf("%d", &temp);

        if (temp >= 100 && temp <= 100000)
        {
            amount[i] = temp;  
            i++;              

            printf("Thank you\n");
            printf("Deposit succeeded\n");
        }
        else
        {
            
            printf("enter amount between 100 to 100000\n");
        }

        if (i >= 1000)
        {
            printf("Maximum deposit limit reached\n");
            break;
        }
    }


}