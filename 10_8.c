#include<stdio.h>
 int factorial(int);
int main()
{
    int f ,number,r;
    printf("enter  number\n");
    scanf("%d",&number);
     printf("enter  number\n");
    scanf("%d",&r);
   
     int p=factorial(number)/factorial(r);
printf("the number of arrangment: %d",p);
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