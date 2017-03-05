import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        in.close();
        // your code goes here
        Arrays.sort(a);
        int minimumDifference = Math.abs(a[0] - a[1]);
        int difference;
        for(int i = 1; i < n-1; ++i) {
            difference = Math.abs(a[i] - a[i+1]);
            if(difference < minimumDifference) {
                minimumDifference = difference;
            }
        }
        System.out.println(minimumDifference);
    }
}
