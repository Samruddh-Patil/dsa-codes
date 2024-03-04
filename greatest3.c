#include<stdio.h>
main()
{
int a,b,c;
printf("enter 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)

printf("%d is greatest\n",a);
else if (b>a && b>c)
printf(" %d is greatest ",b);
else if(c>a&&c>b)
printf("%d is the greatest",c);

}
