#include<stdio.h>
 void Odd_number(int);
 int main()
 {
    int n;
    printf("enter n\n");
    scanf("%d",&n);

    printf("the first %d  odd number :\n",n);
     Odd_number(n);
    return 0;
    
 }

  void Odd_number(int N)
 {
    int i;
   for ( i = 1; i <=N; i++)
   {
    
       printf(" %d\n",2*i-1 );
        /* code */
        
    /* code */   
   }
   
 }