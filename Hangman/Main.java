/** 
 * @author: Tiffany
 * Acknowledgements: This project adapted and simplified code from
 * https://github.com/coding-horror/basic-computer-games/blob/main/44_Hangman/java/Hangman.java 
 * 
 * This project is part of Engaging Engineering's Intermediate Java Workshop
 * 
 * This code is a simplified version of hangman where the computer will
 * randomly select a word, let the user guess letters until they get the word,
 * and display the user's total number of incorrect guesses.
 */

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    String[] wordList = new String[]{"hello", "hi", "world", "coding", "engineering", "fun", "java"};
    int selectedWordIndex = (int)(Math.random() * wordList.length);
    String selectedWord = wordList[selectedWordIndex];
    //System.out.println("selected word is " + selectedWord);

    String display = "_ ".repeat(selectedWord.length());

    int wrongCounter = 0;
    
    while(display.contains("_")){
      System.out.println("Word: " + display);
      System.out.print("Guess a letter: ");
      String guessedLetter = scanner.nextLine();
      
      boolean correctGuess = false;
      for(int i = 0; i < selectedWord.length(); i++){
        if (selectedWord.substring(i, i+1).equals(guessedLetter)){
          display = display.substring(0, i * 2) + guessedLetter + " " + display.substring(i*2 + 2);
          correctGuess = true;
        }
      }
      if (!correctGuess) wrongCounter++;
    }
    System.out.println("Final Word: " + display);
    
    System.out.println(wrongCounter + " incorrect guesses");
    scanner.close();
  }
}

