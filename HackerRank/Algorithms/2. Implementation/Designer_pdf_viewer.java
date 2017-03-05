import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] h = new int[26];
        for(int h_i=0; h_i < 26; h_i++){
            h[h_i] = in.nextInt();
        }
        String word = in.next();
        in.close();

        int height = 0;
        for(int i = 0; i < word.length(); ++i) {
            if (height < h[word.charAt(i) - 97]) {
                height = h[word.charAt(i) - 97];
            }
        }
        System.out.println(height * word.length());
    }
}
