import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int number=sc.nextInt();

        int digitCount=0;
        int tmpNum=number;
        while(tmpNum!=0) {
            tmpNum/=10;
            digitCount++;
        }
        int div=(int)Math.pow(10, digitCount-1);
        while(div!=0) {
            System.out.println(number/div);
            number=number%div;
            div=div/10;
        }
    }
}