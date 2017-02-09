import java.util.Scanner;
import java.lang.Math;

class GFG
 {
	public static void main (String[] args)
	{
	    Scanner scan = new Scanner(System.in);
	    int testCase = scan.nextInt();
	    String str, result;
      int i, j, k;
      int row, column;
      int length, ceilValue, floorValue;
      scan.nextLine();
    	while(testCase!=0)
    	{
    	    str = scan.nextLine();
          result = "";
          length     = str.length();
          floorValue = Math.floor(Math.sqrt(length));
          ceilValue  = Math.ceil(Math.sqrt(length));
          if (floorValue * floorValue >= length) {
              row = floorValue;
              column = floorValue;
          }
          else if (floorValue * ceilValue >= length) {
              row = floorValue;
              column = ceilValue;
          }
          else {
              row = ceilValue;
              column = ceilValue;
          }
          char[][] encrypt_matrix = new char[row][column];
          k = 0;
          for(i = 0; i < row; ++i) {
              for(j = 0; j < column; ++j) {
                  if (k < length) {
                      encrypt_matrix[i][j] = str.charAt(k);
                      ++k;
                  }
                  else {
                      encrypt_matrix[i][j] = ' ';
                  }
              }
          }
          for (i = 0; i < column; ++i) {
              for(j = 0; j < row; ++j) {
                  if (encrypt_matrix[j][i] != ' ')
                      result += encrypt_matrix[j][i];
              }
              result += " ";
          }
    	    System.out.println(result);
          --testCase;
    	}
    	scan.close();
	}
}
