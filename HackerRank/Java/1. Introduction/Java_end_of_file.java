import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int lineNumber = 0;
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext())
        {
            System.out.println(++lineNumber + " " + scan.nextLine());
        }
        scan.close();
    }
}
