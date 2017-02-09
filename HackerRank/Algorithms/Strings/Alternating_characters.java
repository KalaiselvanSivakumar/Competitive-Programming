import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int testCase;
        testCase = scan.nextInt();
        String str;
        int i, j, deleteCharactersCount;
        scan.nextLine();
        while (testCase != 0) {
            str = scan.nextLine();
            deleteCharactersCount = 0;
            i = 1;
            j = 0;
            while (i < str.length()) {
                if (str.charAt(i) == str.charAt(j)) {
                    deleteCharactersCount++;
                    ++i;
                }
                else {
                    j = i;
                    ++i;
                }
            }
            System.out.println(deleteCharactersCount);
            testCase--;
        }
        scan.close();
    }
}
