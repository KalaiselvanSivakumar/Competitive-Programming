import java.util.Scanner;
import java.lang.Math;

public class Solution {

    public static boolean checkForFunnyString(String s) {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j) {
            if (Math.abs(s.charAt(i) - s.charAt(i+1)) !=
                Math.abs(s.charAt(j) - s.charAt(j-1))) {
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int testCase;
        String input;
        testCase = in.nextInt();
        in.nextLine();
        while (testCase != 0) {
            input = in.nextLine();
            if (checkForFunnyString(input))
                System.out.println("Funny");
            else
                System.out.println("Not Funny");
            --testCase;
        }
        in.close();
    }
}
