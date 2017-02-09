import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        String time = scan.nextLine();
        scan.close();
        if (time.charAt(8) == 'A') {
            if (time.substring(0, 2).equals("12")) {
                time = "00" + time.substring(2, 8);
            }
            else {
                time = time.substring(0, 8);
            }
        }
        else {
            if (time.substring(0, 2).equals("12")) {
                time = time.substring(0, 8);
            }
            else {
                time = Integer.parseInt(time.substring(0, 2)) + 12 + time.substring(2, 8);
            }
        }
        System.out.println(time);
    }
}
