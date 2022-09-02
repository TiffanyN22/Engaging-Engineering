/**
 * @author: Tiffany
 * This code is part of Engaging Engineering's
 * Intro to Java Workshop
 * 
 * This code is meant to mimic a bank by allowing the
 * user to deposit money, withdraw money, get their current
 * balance, and perform multiple transactions.
 */

import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    double balance = 0;
    double enteredValue = 1;
    
    System.out.println("Welcome to the bank!");
    do{
      System.out.println("Your Options: ");
      System.out.println(" 1 - Deposit");
      System.out.println(" 2 - Withdraw");
      System.out.println(" 3 - Get Balance");
      System.out.print("Enter your choice: ");
      int selection = scanner.nextInt();
      
      if(selection == 1){
        System.out.print("Enter amount to deposit: $");
        double deposit = scanner.nextDouble();
        balance+=deposit;
        System.out.println("Your transaction was successful");
      }
      else if(selection == 2){
        System.out.print("Enter amount to withdraw: $");
        double deposit = scanner.nextDouble();
        balance-=deposit;
        System.out.println("Your transaction was successful");
      }
      else if(selection == 3){
        System.out.printf("Your balance is $%.2f\n", balance);
      }

      System.out.print("Would you like to make another trasaction (1 for yes, 2 for no): ");
      enteredValue = scanner.nextDouble();
    } while (enteredValue == 1);
    scanner.close();
  }
}
