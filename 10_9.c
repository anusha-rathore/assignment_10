#include<stdio.h>
int fun(int,int);
int main(){
    int number ,digit;
    printf("enter digit\n");
    scanf("%d",&digit);
    printf("enter number\n");
    scanf("%d",&number);
  int r=fun(number,digit);
    if(r==1)
    {
printf("A number is contains a given digit");
        /* code */
    }
    else
    {
        printf("a number  does not contain a given digit");
    }
       
}
    return 0;
   
int fun(int n,int d)
{
    int r;
    while (d)

    {
        r=d%10;
    if (r==n)
    {
        /* code */
        return 1;
    }
    d=d/10;

        /* code */
    }
    return 0;
     
}