//Write a program to find the Nth term of the Fibonnaci series.
    #include<stdio.h>
    int main()
    {
     int n1=0,n2=1,n3,i,number;
     printf("Enter the number of elements:");
     scanf("%d",&number);
     for(i=2;i<number;++i)
     {
      n3=n1+n2;
      n1=n2;
      n2=n3;
     }      printf(" %d",n3);

      return 0;
     }
