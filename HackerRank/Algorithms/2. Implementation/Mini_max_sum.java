import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();
        long d = in.nextLong();
        long e = in.nextLong();
        in.close();

        long min, max, sum;
        sum = a + b + c + d + e;
        min = a;
        max = a;

        if (min > b) { min = b; }
        if (min > c) { min = c; }
        if (min > d) { min = d; }
        if (min > e) { min = e; }

        if (max < b) { max = b; }
        if (max < c) { max = c; }
        if (max < d) { max = d; }
        if (max < e) { max = e; }

        System.out.println((sum-max) + " " + (sum-min));


    }
}
