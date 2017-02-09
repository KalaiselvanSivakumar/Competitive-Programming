import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int input = scan.nextInt();
        scan.close();

        for(int i = 0; i < input; ++i) {
            int j;
            for(j = 0; j < input-i-1; ++j) {
                System.out.print(' ');
            }
            for(; j < input; ++j) {
                System.out.print('#');
            }
            System.out.print('\n');
        }
    }
}
