import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int a0 = 0; a0 < n; a0++){
            int grade = in.nextInt();
            // your code goes here
            if ((grade >= 38) && (grade % 5) > 2) {
              grade = ((grade + 2) / 5) * 5;
            }
            System.out.println(grade);
        }
    }
}
