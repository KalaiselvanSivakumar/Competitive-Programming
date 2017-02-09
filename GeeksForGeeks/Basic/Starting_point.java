import java.util.Scanner;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();
      int[] currentPoint = new int[2];
      int[][] paths;
      int totalPaths;
    	while(testcase!=0)
    	{
    	    currentPoint[0] = scan.nextInt();
          currentPoint[1] = scan.nextInt();
          totalPaths = scan.nextInt();
          paths = new int[totalPaths][2];
          for(int i = 0; i < totalPaths; ++i)
          {
              paths[i][0] = scan.nextInt();
              paths[i][1] = scan.nextInt();
          }
          for(int i = 0; i < totalPaths; ++i)
          {
              currentPoint[0] -= paths[i][0];
              currentPoint[1] -= paths[i][1];
          }
    	    System.out.println(currentPoint[0] + " " + currentPoint[1]);
          --testcase;
    	}
    	scan.close();
	}
}
