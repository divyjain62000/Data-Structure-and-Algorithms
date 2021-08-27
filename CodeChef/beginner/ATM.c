#include <stdio.h>
int main(void) 
{
int x;
scanf("%d",&x);
float balance;
scanf("%f",&balance);
if(balance>=0 && x>0 && x%5==0)
{
float leftAmount=balance-x-0.50f;
if(leftAmount>=0.00) printf("%.2f",leftAmount);
else printf("%.2f",balance);
}
else printf("%.2f",balance);
return 0;
}

