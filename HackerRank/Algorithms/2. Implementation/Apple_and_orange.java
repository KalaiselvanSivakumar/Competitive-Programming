import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int[] apple = new int[m];
        for(int apple_i=0; apple_i < m; apple_i++){
            apple[apple_i] = in.nextInt();
        }
        int[] orange = new int[n];
        for(int orange_i=0; orange_i < n; orange_i++){
            orange[orange_i] = in.nextInt();
        }
        in.close();

        //Solution
        int count = 0;
        for(int apple_i=0; apple_i < m; apple_i++){
            if ((s <= apple[apple_i] + a) && (t >= apple[apple_i] + a))
                count++;
        }
        System.out.println(count);
        count = 0;
        for(int orange_i=0; orange_i < n; orange_i++){
            if ((s <= orange[orange_i] + b) && (t >= orange[orange_i] + b))
                count++;
        }
        System.out.println(count);
    }
}
