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
	    char testCharacter;
      int count;
      String str;
      String result;
      scan.nextLine();
    	while(testcase != 0)
      {
          result = "";
          str = scan.nextLine();
          testCharacter = str.charAt(0);
          count = 1;
          for(int i = 1; i < str.length() && str.charAt(i) != ' '; ++i)
          {
              if (str.charAt(i) == testCharacter)
              {
                  count += 1;
              }
              else
              {
                  result += testCharacter + "" + count;
                  testCharacter = str.charAt(i);
                  count = 1;
              }
          }
          result += testCharacter + "" + count;
    	    System.out.println(reverse(result));
          --testcase;
    	}
    	scan.close();
	}
}
