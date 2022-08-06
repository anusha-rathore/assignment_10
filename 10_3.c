#include<stdio.h>
int check(int);
int main()
{
    int number;
    printf("enter number\n");
    scanf("%d",&number);

    check(number);
    printf("%d",check(number));
    return 0;
    
}
int check(int num)
{
    if (num%2==0)
    {
        /* code */
        return 1;
    }
    return 0;
    
}