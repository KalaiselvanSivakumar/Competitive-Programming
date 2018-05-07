import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();
    	while (testcase != 0)
    	{
            int size, product;
            size = scan.nextInt();
            product = scan.nextInt();

            int[] arr = new int[size];
            int i;
            for (i = 0; i < size; i++)
            {
                arr[i] = scan.nextInt();
            }

            Set<Integer> container = new HashSet<>();
            boolean resultFlag = false;
            for (i = 0; i < size; i++)
            {
                if (arr[i] == 0) { continue; }
                int toBeSearched = product / arr[i];
                if ((toBeSearched * arr[i] == product) && container.contains(toBeSearched))
                {
                    resultFlag = true;
                    break;
                }
                container.add(arr[i]);
            }
            if (resultFlag) {
                System.out.println("Yes");
            }
            else {
                System.out.println("No");
            }
            --testcase;
    	}
    	scan.close();
	}
}