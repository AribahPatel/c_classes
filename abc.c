#include<stdio.h>
int main()
{
int x=435,y,z;
printf("enter the number");
scanf("%d",&x);

y=x%10;

z=x/10;
int a =z%10;


int g=z/10; 
int b=g%10;


printf("unit place digit is %d\n",y);
printf("tens place digit is %d\n",a);
printf("hundreds place digit is %d\n",b);

int i=y+a+b;
printf("addition of those numbers is %d\n",i);



return 0;
}

