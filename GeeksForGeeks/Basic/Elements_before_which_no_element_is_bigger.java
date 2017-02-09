import java.util.Scanner;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();
      int size, maximum, count;
      int[] arr;
    	while(testcase!=0)
    	{
    	    size = scan.nextInt();
          arr = new int[size];
          for(int i = 0; i < size; ++i)
          {
              arr[i] = scan.nextInt();
          }
          maximum = arr[0];
          count = 1;
          for(int i = 1; i < size; ++i)
          {
              if (arr[i] > maximum)
              {
                  maximum = arr[i];
                  ++count;
              }
          }
    	    System.out.println(count);
          --testcase;
    	}
    	scan.close();
	}
}
