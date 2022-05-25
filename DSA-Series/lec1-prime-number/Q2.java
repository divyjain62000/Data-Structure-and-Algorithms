import java.util.*;

class Solution {
public static void main(String args[]) 
{
    Scanner sc=new Scanner(System.in);
    int low=sc.nextInt();
    int high=sc.nextInt();
    for(int n=low;n<=high;n++)
    {
        boolean flag=false;
        for(int i=2;i*i<=n;i++) 
        {
            if(n%i==0) {
                flag=true;
                break;
            }
        }
        if(flag==false) System.out.println(n);
    }

}
}
