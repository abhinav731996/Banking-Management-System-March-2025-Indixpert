#include <stdio.h>
#include <string.h>

void withdraw();

int main()
{
    withdraw();
    return 0;
}

void withdraw()
{
    int amount[1000]; 
    int i = 0;       

    while (1)
    {
        int temp;
        printf("withdraw your  money\n");
        printf("Enter amount ");
        scanf("%d", &temp);

        if (temp >= 100 && temp <= 100000)
        {
            amount[i] += temp;  
            i++;              

            printf("Thank you\n");
            printf("withdraw succeeded\n");
        }
        else
        {
            
            printf("enter amount between 100 to 100000\n");
        }

        if (i > 100000)
        {
            printf("Maximum withdraw limit reached\n");
            break;
        }
    }


}
          