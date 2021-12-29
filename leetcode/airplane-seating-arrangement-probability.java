//O(1)
import java.util.*;

class Solution 
{
public static double nthPersonGetsNthSeat(int n) {
if(n==1) return 1;
else return 0.5;
}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int n=Integer.parseInt(sc.nextLine());
System.out.print(nthPersonGetsNthSeat(n));
}
}