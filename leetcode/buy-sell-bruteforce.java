//O(n*n)
import java.util.*;

class Solution
{
public int maxProfit(int prices[])
{
int len=prices.length;
int maxProfit=0;
for(int i=0;i<len;i++)
{
for(int j=i+1;j<len;j++)
{
int profit=prices[j]-prices[i];
if(profit>maxProfit) maxProfit=profit;
}
}
return maxProfit;
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String sarr[]=sc.nextLine().split(" ");
int len=sarr.length;
int []prices=new int[len];
for(int i=0;i<len;i++)
{
prices[i]=Integer.parseInt(sarr[i]);
}
Solution solution=new Solution();
System.out.println(solution.maxProfit(prices));
}
}