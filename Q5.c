//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int n1,n2,i,gcd,lcm;
 printf("enetr the two positive number =");
 scanf("%d%d",&n1,&n2);
 for(i=1;i<=n1 && i<=n2;++i)
 {
     if(n1%i==0&&n2%i==0)
     {
         gcd=i;
     }

 }
    printf("\n the gcd or hcf of %d %d is = %d",n1,n2,gcd);
    return 0;
}


