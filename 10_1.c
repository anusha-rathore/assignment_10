#include<stdio.h>
float area(float);
int main()
{
    float radius , Area ;
    printf("enter radius of circle");
    scanf("%f",&radius);
     Area=area(radius);
    printf("area is %f",Area );
    return 0;
    
}
float area (float radius)
{
    float area;
    area = 3.14 *radius*radius;
    return (area);

}