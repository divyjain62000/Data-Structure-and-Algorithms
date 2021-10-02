import java.util.*;
class Solution
{
static Map<String,Boolean> m=new HashMap<>();    
public static boolean _isInterleave(String a,String b,String c,int alen,int blen,int clen,int i,int j,int k)
{
if(k==clen)
{
return (i==alen && j==blen)?true:false;
}
String key=i+"*"+j+"*"+k;
if(m.containsKey(key)) return m.get(key);
if(i==alen && j<blen) m.put(key,(b.charAt(j)==c.charAt(k))?_isInterleave(a,b,c,alen,blen,clen,i,j+1,k+1):false);
if(i<alen && j==blen) m.put(key,(a.charAt(i)==c.charAt(k))?_isInterleave(a,b,c,alen,blen,clen,i+1,j,k+1):false);
boolean one=false,two=false;
if(i<alen && k<clen && a.charAt(i)==c.charAt(k)) one=_isInterleave(a,b,c,alen,blen,clen,i+1,j,k+1);
if(j<blen && k<clen && b.charAt(j)==c.charAt(k)) two=_isInterleave(a,b,c,alen,blen,clen,i,j+1,k+1);
m.put(key,one || two);
return m.get(key);
}
public static boolean isInterleave(String s1, String s2, String s3) 
{
if(s1.length()+s2.length()!=s3.length()) return false;
return _isInterleave(s1,s2,s3,s1.length(),s2.length(),s3.length(),0,0,0);
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String a=sc.nextLine();
String b=sc.nextLine();
String c=sc.nextLine();
boolean result=isInterleave(a,b,c);
System.out.print(result);
}
}
