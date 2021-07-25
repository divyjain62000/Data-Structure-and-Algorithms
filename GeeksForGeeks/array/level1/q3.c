#include<stdio.h>
#include<stdlib.h>
void reverseArray(int n,int *arr)
{
int i;
int j=n-1;
int g;
for(i=0;i<n/2;i++)
{
g=arr[i];
arr[i]=arr[j];
arr[j]=g;
j--;
}
}
void printArray(int n,int *arr)
{
int i;
for(i=0;i<n;i++) printf("%d ",arr[i]);
}
int main()
{
int n;
int i;
int *arr; 
printf("Enter size of array: ");
scanf("%d",&n);
arr=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++) scanf("%d",&arr[i]);
reverseArray(n,arr);
printArray(n,arr);
free(arr);
return 0;
}