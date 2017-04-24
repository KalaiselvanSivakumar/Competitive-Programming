import java.util.Scanner;

class SudokuValidityChecker {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int[][] sudoku = new int[9][9];
    //Getting the sudoku
    int i, j;
    for(i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        sudoku[i][j] = scanner.nextInt();
      }
    }
    //Validity check logic
    
    scanner.close();
  }

}
