//Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,i,number;
    printf("\n enter the number check fibonacci series or not =");
    scanf("%d",&number);
    while (n3< number)
        {
            n3= n1 + n2;

            n1 = n2;

            n2 =n3;
        }

        if(n3 == number)
        {
            printf("Number belongs to Fibonacci series");
        }
        else
        {
            printf("Number doesn't belongs to Fibonacci series");
        }


}
