#include<stdio.h>
 int factorial(int);
int main()
{
    int f ,number,r;
    printf("enter  number\n");
    scanf("%d",&number);
     printf("enter  number\n");
    scanf("%d",&r);
   
     int combination=factorial(number)/(factorial(r)*factorial(number-r));
   printf("the number of combinations : %d",combination);
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