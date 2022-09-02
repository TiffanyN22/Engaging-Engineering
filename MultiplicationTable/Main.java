/** @author: Tiffany
 * This code is part of Engaging Engineering's
 * Intro to Java Workshop
 * 
 * This code creates and prints a multiplication table 
 * in a 2D Array
 */

class Main {
  public static void main(String[] args) {
    int[][] table = new int [10][10];
    
    System.out.println("      1   2   3   4   5  6   7   8   9   10");
    System.out.println("-------------------------------------------");
    
    for(int i = 0; i < table.length; i++){
      System.out.printf("%2d |", (i+1));
      for(int j = 0; j < table[i].length; j++){
        table[i][j] = (i+1) * (j+1);
        System.out.printf("%3d ", table[i][j]);
      }
      System.out.println();
    }
  }
}