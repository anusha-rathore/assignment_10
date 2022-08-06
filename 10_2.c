#include<stdio.h>
float simple_interest(float,float,float);
int main()
{
    float principle,rate,time,s_i;
    printf("enter principle\n enter rate\n enter time\n");
    scanf("%f%f%f",&principle,&rate,&time);
    s_i=simple_interest(principle,rate,time);
    printf("simple interest.%f",s_i);
    return 0;

    
}
float simple_interest(float p,float r,float t)

{
    float S_I;
    S_I= (p*r*t)/100;
    return (S_I);

}