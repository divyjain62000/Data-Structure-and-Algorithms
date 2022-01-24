// Tc -> O(n^3)  SC -> O(1)
import java.util.*;

class Solution
{
public int sumOddLengthSubarrays(int[] arr) 
{
int n=arr.length;
int sum=0;
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j+=2)
{
for(int k=i;k<=j;k++)
{
sum+=arr[k];
}
}
}
return sum;
}

public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String numArr[]=sc.nextLine().split(" ");
int n=numArr.length;
int arr[]=new int[n];
for(int i=0;i<n;i++)
{
arr[i]=Integer.parseInt(numArr[i]);
}
Solution s=new Solution();
System.out.print(s.sumOddLengthSubarrays(arr));
}
}