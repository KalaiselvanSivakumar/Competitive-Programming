import java.util.Scanner;

class GFG
 {

  public static String reverse(String input)
  {
      String output = "";
      for(int i = 0; i < input.length(); ++i)
      {
          output = input.charAt(i) + output;
      }
      return output;
  }
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testcase = scan.nextInt();
      String str, result;
      char testCharacter;
      int testCount;
      scan.nextLine();
    	while(testcase!=0)
    	{
    	    str = scan.nextLine();
          testCharacter = str.charAt(0);
          testCount = 1;
          result = "";
          for(int i = 1; i < str.length(); ++i)
          {
              if (testCharacter == str.charAt(i))
              {
                  ++testCount;
              }
              else
              {
                  result += testCharacter + "" + Integer.toHexString(testCount);
                  testCharacter = str.charAt(i);
                  testCount = 1;
              }
          }
          result += testCharacter + "" + Integer.toHexString(testCount);

    	    System.out.println(reverse(result));
          --testcase;
    	}
    	scan.close();
	}
}
