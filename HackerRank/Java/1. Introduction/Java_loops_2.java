import java.util.Scanner;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            long result = a;
            int twoPower = 1;
            for(int j=0; j<n; ++j)
            {
                result += twoPower * b;
                twoPower *= 2;
                System.out.print(result + " ");
            }
            System.out.println();
        }
        in.close();
    }
}
