// TC -> O(n)  SC -> O(1)
import java.util.*;

class Solution
{
public static List<Integer> partitionLabels(String s)
{
List<Integer> res=new LinkedList<>();
int n=s.length();
Map<Character,Integer> m=new HashMap<>();
for(int i=0;i<n;i++)
{
char ch=s.charAt(i);
m.put(ch,i);
}
int prev=-1;
int max=0;
for(int i=0;i<n;i++)
{
char ch=s.charAt(i);
max=Math.max(max,m.get(ch));
if(max==i)
{
res.add(max-prev);
prev=max;
}
}
return res;
}
public static void main(String args[])
{
String s;
Scanner sc=new Scanner(System.in);
s=sc.nextLine();
List<Integer> res=partitionLabels(s);
for(int x:res)
{
System.out.print(x+" ");
}
}
}