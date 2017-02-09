import java.util.Scanner;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();
	    int theifCapacity, goldBoxes;
	    int[][] goldCount;
      int i, j;
      int totalCoins;
    	while(testcase!=0)
    	{
          //Getting & Setting Inputs
    	    theifCapacity = scan.nextInt();
          goldBoxes = scan.nextInt();
          goldCount = new int[goldBoxes][2];
          for(i=0; i<goldBoxes; ++i)
          {
              goldCount[i][0] = scan.nextInt();
              goldCount[i][1] = scan.nextInt();
          }

          //Logic Part
          //Sort the array based on the number of coins per plate
          for(i=0; i<goldBoxes-1; ++i)
          {
              for(j=i+1; j<goldBoxes; ++j)
              {
                  if(goldCount[i][1] < goldCount[j][1])
                  {
                      goldCount[i][0] ^= goldCount[j][0];
                      goldCount[j][0] ^= goldCount[i][0];
                      goldCount[i][0] ^= goldCount[j][0];
                      goldCount[i][1] ^= goldCount[j][1];
                      goldCount[j][1] ^= goldCount[i][1];
                      goldCount[i][1] ^= goldCount[j][1];
                  }
              }
          }
          //Finding the number of gold coins the theif can take
          i = 0;
          totalCoins = 0;
          while(theifCapacity != 0)
          {
              if(theifCapacity > goldCount[i][0])
              {
                  theifCapacity -= goldCount[i][0];
                  totalCoins += (goldCount[i][0] * goldCount[i][1]);
                  ++i;
              }
              else
              {
                  totalCoins += (theifCapacity * goldCount[i][1]);
                  theifCapacity = 0;
              }
          }

          //Display the output
    	    System.out.println(totalCoins);
    	    --testcase;
    	}
    	scan.close();
	}
}
