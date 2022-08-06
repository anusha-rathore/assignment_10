#include<stdio.h>
int primefact(int);
int main(){
    int number;
    printf("enter number\n");
    scanf("%d",&number);
    printf("all prime factors of a given number is :\n");
    primefact(number);
    return 0;

}
int primefact(int number){
    int i ;
    for ( i = 2; number!=1; i++)
    {
        while (number%i==0)
        {
            number=number/i;
            printf("%d ,",i);
        }
        
    }
    
}