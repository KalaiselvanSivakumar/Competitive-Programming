import java.util.Scanner;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();
	    
    	while (testcase != 0)
    	{
            int size = scan.nextInt();
            int i;
            int[] arr = new int[size];
            for (i = 0; i < size - 1; i++)
            {
                arr[i] = scan.nextInt();
            }

            // Logic Part
            boolean[] status = new boolean[size];
            for (i = 0; i < size - 1; i++)
            {
                status[arr[i] - 1] = true;
            }
            for (i = 0; i < size; i++) {
                if (status[i] == false)
                {
                    System.out.println(i + 1);
                    break;
                }
            }
    	    --testcase;
    	}
    	scan.close();
	}
}