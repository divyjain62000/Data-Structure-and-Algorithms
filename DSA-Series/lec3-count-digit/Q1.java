import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 1;
        while (n/10 != 0) {
            n = n / 10;
            count++;
        }
        System.out.print(count);
    }
}