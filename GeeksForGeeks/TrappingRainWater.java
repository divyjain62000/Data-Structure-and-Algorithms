import java.util.*;
class Solution
{
static long trappingWater(int arr[],int n)
{
long res=0;
int l=0;
int r=n-1;
long leftMax=0;
long rightMax=0;
while(l<r)
{
if(arr[l]<=arr[r])
{
if(arr[l]>=leftMax) leftMax=arr[l];
else res+=(leftMax-arr[l]);
l++;
}
else
{
if(arr[r]>=rightMax) rightMax=arr[r];
else res+=(rightMax-arr[r]);
r--;
}
}
return res;
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n=Integer.parseInt(sc.nextLine());
int arr[]=new int[n];
String tmpArr[]=sc.nextLine().split(" ");
for(int i=0;i<n;i++)
{
arr[i]=Integer.parseInt(tmpArr[i]);
}
System.out.print(trappingWater(arr,n));
}
}
