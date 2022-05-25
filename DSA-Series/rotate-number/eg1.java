import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int k=sc.nextInt();
        int numberOfDigit=0;
        
        int temp=num;
        while(temp>0) {
            temp=temp/10;
            numberOfDigit++;
        }

        k=k%numberOfDigit;
        if(k<0) {
            k=k+numberOfDigit;
        }

        int div=1;
        int mult=1;
        for(int i=1;i<=numberOfDigit;i++) {
            if(i<=k) div=div*10;
            else mult=mult*10;
        }

        int q=num/div;
        int r=num%div;

        int rot=r*mult+q;
        System.out.println(rot);
        

    }
}