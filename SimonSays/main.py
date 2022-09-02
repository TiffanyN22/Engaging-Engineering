#author: Tiffany
#This project is part of Engaging Engineering's
#Intro to Python Workshop

#This is a game of Simon says, where the program
#will prompt the user to say specific words
#Users will earn a point if they follow
#Simon's commands or break other commands,
#and the game ends once the user makes a mistake
#or goes through all commands.

print("Welcome to Simon Says")
points = 0

x = input("Simon says say hello: ")
if(x == "hello"):
  points+=1

  x = input("Simon says say world: ")
  if(x == "world"):
    points+=1

    x = input("Say yay: ")
    if(x != "yay"):
      points+=1

print("you earned", points, "points")