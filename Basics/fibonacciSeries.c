#include<stdio.h>
int main()
{
int limit;
int x,y,z;
printf("Enter limit upto which you want to generate series: ");
scanf("%d",&limit);
x=0;
y=1;
printf("Fibonnaci Series: \n");
printf("%d %d ",x,y);
for(int e=2;e<limit;e++)
{
z=x+y;
printf("%d ",z);
x=y;
y=z;
}
return 0;
}