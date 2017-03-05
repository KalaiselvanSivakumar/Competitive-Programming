import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int length = Integer.parseInt(scan.nextLine());
        String str = scan.nextLine();
        scan.close();
        int stepCount = 0;
        for(int i = 0; i < length-2;) {
            if(str.substring(i, i+3).equals("010")) {
                stepCount++;
                i = i + 3;
            }
            else {
                ++i;
            }
        }
        System.out.println(stepCount);
    }
}
