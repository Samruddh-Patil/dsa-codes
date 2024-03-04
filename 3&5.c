#include<stdio.h>
main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
if(num%3==0 && num%5==0)
{
printf("divisble by both 3 and 5\n");
}
else
{
printf("not divisible by both3 and 5\n");
}
}
