#include<stdio.h>
 void natural_number(int);
 int main()
 {
    int n;
    printf("enter n");
    scanf("%d",&n);

    printf("the first %d  natural number :\n",n);
     natural_number(n);

 }

  void natural_number(int N)
 {
    int i;
   for ( i = 1; i <=N; i++)
   {
    printf(" %d", i);
    /* code */   
   }
   
 }