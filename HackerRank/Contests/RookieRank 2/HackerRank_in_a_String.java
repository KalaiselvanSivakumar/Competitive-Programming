import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        final String searchText = "hackerrank";
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            // your code goes here
            int length = s.length();
            int i, j = 0;
            for(i = 0; i < length; ++i) {
                if (s.charAt(i) == searchText.charAt(j)) {
                    ++j;
                    if (j == 10) {
                        break;
                    }
                }
            }
            if (i < length) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
        in.close();
    }
}
