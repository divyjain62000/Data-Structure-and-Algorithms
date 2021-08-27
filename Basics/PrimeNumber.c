#include<stdio.h>
#define false 0
#define true 1
int main()
{
int n;
int i,j;
printf("Enter limit between which you want to get prime number: ");
scanf("%d",&n);
int flag=true;
for(i=2;i<=n;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0) 
{
flag=false;
break;
}
}
if(flag==true)
{
printf("%d ",i);
}
else
{
flag=true;
}
}
return 0;
}