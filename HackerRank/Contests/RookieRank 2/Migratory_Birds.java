import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] types = new int[n];
        for(int types_i=0; types_i < n; types_i++) {
            types[types_i] = in.nextInt();
        }
        in.close();
        // your code goes here
        int[] knownTypes = new int[6];
        int maxCount = 0;
        int birdTypeId = 0;
        for(int i = 0; i < n; ++i) {
            knownTypes[types[i]]++;
        }
        for(int i = 1; i < 6; ++i) {
            if (maxCount < knownTypes[i]) {
                maxCount = knownTypes[i];
                birdTypeId = i;
            }
        }
        System.out.println(birdTypeId);
    }
}
