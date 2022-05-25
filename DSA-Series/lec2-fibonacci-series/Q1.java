import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a=0;
        int b=1;
        int c=a+b;
        for(int i=1;i<=n;i++) {
            System.out.println(a);
            c=a+b;
            a=b;
            b=c;
        }
    }
}