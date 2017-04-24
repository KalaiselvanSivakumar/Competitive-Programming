import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();

        int length = S.length();
        int alteredCharacters = 0;
        for (int i = 0; i < length; ++i) {
          if (i%3 == 1) {
            if (S.charAt(i) != 'O') {
              ++alteredCharacters;
            }
          } else {
            if (S.charAt(i) != 'S') {
              ++alteredCharacters;
            }
          }
        }
        System.out.println(alteredCharacters);
    }
}
