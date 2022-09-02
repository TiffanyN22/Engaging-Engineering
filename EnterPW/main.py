#author: Tiffany
#This code is part of Engaging Engineering's
#Intro to Python Workshop

#This program is meant to mimic entering a password
#by prompting the user to enter a password until they 
#get it right and giving them a hint on their third try
#if needed

password = "helloWorld"
userInput = input("Enter password: ")
tries = 0

while(userInput != password):
  tries += 1
  if(tries == 3):
    print("HINT: this is a coding phrase")
  userInput = input("Incorrect password-try again: ")
