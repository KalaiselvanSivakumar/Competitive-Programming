import java.util.Scanner;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();

      int input, givenOutput;
    	while(testcase!=0)
    	{
          input       = scan.nextInt();
          givenOutput = scan.nextInt();
          if ((input * (input + 1))/2 == givenOutput) {
              System.out.println(1);
          }
    	    else {
              System.out.println(0);
          }
          --testcase;
    	}
    	scan.close();
	}
}
