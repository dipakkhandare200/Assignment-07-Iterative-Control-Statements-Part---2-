//Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int n1,n2,i,gcd,lcm;
 printf("enetr the two positive number =");
 scanf("%d%d",&n1,&n2);
 for(i=1;i<=n1;i++)
 {
     if(n1%i==0&&n2%i==0)
     {
         gcd=i;
     }

 }
    if(gcd==1)
    {
        printf("\n its a %d & %d are co prime numbers",n1,n2);
    }
    else
    {
        printf("\n its a %d & %d are not  co prime numbers",n1,n2);

    }
}

