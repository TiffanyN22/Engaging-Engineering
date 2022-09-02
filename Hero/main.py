#author: Tiffany
#This code is part of Engaging Engineering's
#Intermediate Python Workshop

from Hero import Hero 

merlin = Hero("Merlin", 256, 45, "healer")
lancelot = Hero("Lancelot", 25, 16, "warrior")

print("Merlin's health: ", merlin.health)
print("Lancelot's health: ", lancelot.health)
lancelot.usePower(merlin)
print("Merlin's health: ", merlin.health)
print("Lancelot's health: ", lancelot.health)
merlin.usePower(merlin)
print("Merlin's health: ", merlin.health)
print("Lancelot's health: ", lancelot.health)