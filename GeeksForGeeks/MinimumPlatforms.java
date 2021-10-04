import java.util.*;
class Solution
{
static int findPlatform(int arr[], int dep[], int n)
{
Arrays.sort(arr);
Arrays.sort(dep);
int i=0;
int j=0;
int platformNeeded=0;
int maxPlatform=0;
while(i<n && j<n)
{
if(arr[i]<=dep[j])
{
platformNeeded++;
i++;
}
else
{
platformNeeded--;
j++;
}
if(platformNeeded>maxPlatform) maxPlatform=platformNeeded;
}
return maxPlatform;
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n=Integer.parseInt(sc.nextLine());
String arrStr[]=sc.nextLine().split(" ");
String depStr[]=sc.nextLine().split(" ");
int arr[]=new int[n];
int dep[]=new int[n];
for(int i=0;i<n;i++)
{
arr[i]=Integer.parseInt(arrStr[i]);
}
for(int i=0;i<n;i++)
{
dep[i]=Integer.parseInt(depStr[i]);
}
System.out.println(findPlatform(arr,dep,n));
}
}
