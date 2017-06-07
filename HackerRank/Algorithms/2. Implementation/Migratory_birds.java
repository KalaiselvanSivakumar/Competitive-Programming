import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] types = new int[n];
        for(int types_i=0; types_i < n; types_i++){
            types[types_i] = in.nextInt();
        }
        // your code goes here
        int[] typeCount = new int[5];
        for(int types_i = 0; types_i < n; types_i++) {
            typeCount[types[types_i] - 1]++;
        }
        int maxCount = 0;
        int maxId = 0;
        for(int max_i = 0; max_i < 5; max_i++) {
          if (maxCount < typeCount[max_i]) {
            maxCount = typeCount[max_i];
            maxId = max_i + 1;
          }
        }
        System.out.println(maxId);
        in.close();
    }
}
