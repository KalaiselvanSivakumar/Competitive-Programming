import java.util.Scanner;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();
	    int totalPens;
	    	while(testcase!=0)
	    	{
	    	    --testcase;
	    	    int totalRedPens = 0, totalGreenPens = 0;
	    	    totalPens = scan.nextInt();
	    	    scan.nextLine();
	    	    String pens = scan.nextLine();
	    	    for(char pen : pens.toCharArray()) {
	    	    		if (pen == 'R') {
	    	    			++totalRedPens;
	    	    		} else {
	    	    			++totalGreenPens;
	    	    		}
	    	    }
	    	    System.out.println(totalRedPens > totalGreenPens ? totalGreenPens : totalRedPens);
	    	}
	    	scan.close();
	}
}