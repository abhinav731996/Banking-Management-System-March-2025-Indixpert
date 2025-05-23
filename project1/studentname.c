#include<stdio.h>

int main()
{

char student[5];
printf("enter any 5 students name : ");
scanf("%[^\n]",&student);
printf(" output = %s",student);

}