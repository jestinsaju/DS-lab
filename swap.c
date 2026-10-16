//write a program to swap 2 numbers
#include <stdio.h>
int main()
{
int a,b,temp;
printf("enter 2 number:");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swap a=%d,b=%d",a,b);
return 0;
}
