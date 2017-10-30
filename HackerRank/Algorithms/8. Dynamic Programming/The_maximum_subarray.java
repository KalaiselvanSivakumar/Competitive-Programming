import java.util.Scanner;

public class Solution {

    public static int findMaximum(int a, int b) {
        if (a > b) {
            return a;
        }
        return b;
    }

    public static int findMaximum(int a, int b, int c) {
        return findMaximum(findMaximum(a, b), c);
    }

    public static void maximumSubArraySum(int[] a) {
        int maxContiguous    = a[0],
            maxNonContiguous = a[0],
            maxTillHere      = a[0];
        for(int i = 1; i < a.length; ++i) {
            maxTillHere      = findMaximum(maxTillHere + a[i], a[i]);
            maxContiguous    = findMaximum(maxContiguous, maxTillHere);
            maxNonContiguous = findMaximum(maxNonContiguous, a[i], maxNonContiguous + a[i]);
        }
        System.out.println(maxContiguous + " " + maxNonContiguous);
    }

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int testCase;
        testCase = in.nextInt();
        int size;
        int[] arr;
        while (testCase != 0) {
            size = in.nextInt();
            arr = new int[size];
            for(int i = 0; i < size; ++i) {
                arr[i] = in.nextInt();
            }
            maximumSubArraySum(arr);
            --testCase;
        }
        in.close();

    }
}
