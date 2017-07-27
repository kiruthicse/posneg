#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d",&a,&b,c);
if(a>b && a>c)
{
printf("the largest number is a");
scanf("%d,&a);
}
elseif(b>a && b>c)
{
printf("the largest number is b");
scanf("%d,&b);
}
else
{
printf("the largest number is c");
scanf("%d,&c);
}
}
