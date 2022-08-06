#include<stdio.h>
 int factorial(int);
int main()
{
    int f ,number;
    printf("enter  number\n");
    scanf("%d",&number);
    printf("factorial is:\n");
     f=factorial(number);
printf("%d",f);
    return 0;
       
    
}
int factorial(int N)
{
    int i, fact = 1;
    for ( i = N; N>=1; N--)
    {
        /* code */
        fact=fact*N;
}

     return fact;
     }