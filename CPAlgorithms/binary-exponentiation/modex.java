import java.util.*;

class Solution
{
public static long powMod(long a,long b,long m) 
{
long res=1;
while(b>0)
{
if((b&1)!=0)
{
res=res*a%m;
}
a=a*a%m;
b=b>>1;
}
return res;
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int t=Integer.parseInt(sc.nextLine());
for(int i=0;i<t;i++)
{
String nums[]=sc.nextLine().split(" ");
long x=Long.parseLong(nums[0]);
long y=Long.parseLong(nums[1]);
long n=Long.parseLong(nums[2]);
long z=powMod(x,y,n);
System.out.println(z);
}
}
}