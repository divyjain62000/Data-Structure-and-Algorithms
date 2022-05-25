import java.util.*;

class Solution {
public static void main(String args[]) 
{
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t>0)
    {
        int n=sc.nextInt();
        boolean flag=false;
        for(int i=2;i*i<=n;i++) 
        {
            if(n%i==0) {
                flag=true;
                break;
            }
        }
        if(flag==false) System.out.println("Prime number");
        else System.out.println("Not a prime number");
        t--;
    }

}
}
