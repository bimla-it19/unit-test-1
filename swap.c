#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter a and b value:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
 printf("%d%d",a,b);
return 0;
}

