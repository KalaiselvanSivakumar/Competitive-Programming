import java.util.Scanner;

public class Solution {

    static int stringConstruction(String s){
        // Complete this function
        boolean[] characters = new boolean[26];
        int i = 0, copyCost = 0;
        int length = s.length();

        while (i < length) {
          char t = s.charAt(i);
          if (!characters[t-'a']) {
            characters[t - 'a'] = true;
            copyCost++;
          }
          i++;
        }

        return copyCost;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = stringConstruction(s);
            System.out.println(result);
        }
    }
}
