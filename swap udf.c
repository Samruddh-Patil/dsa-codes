#include<stdio.h>
void swap (int a, int b);
main()
{
  int a,b,c;
  printf("enter 2 numbers\n");
  scanf("%d%d",&a,&b);
  swap(a,b);

}

void swap(int a,int b)
{
    int c;
  c=a;
  a=b;
  b=c;
  printf("numbers after swap=  %d  %d",a,b);
}
