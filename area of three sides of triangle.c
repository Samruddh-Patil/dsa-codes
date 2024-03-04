#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,s,area;
printf("enter 3 numbers\n");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)*0.5;
printf("semi_perimeter=%f",area);
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%f",area);
}
