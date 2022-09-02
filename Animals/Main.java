/** 
 * @author: Tiffany
 * 
 * This project is part of Engaging Engineering's Intermediate Java Workshop
 */


class Main {
  public static void main(String[] args) {
    Monkey sam = new Monkey("Sam", 5, "Chimpanzee", 5);
    System.out.println(sam.getName());
    System.out.println("Sam has " + sam.getBananas() + " bananas");
    
    Animal bob = new Animal("Bob", 5);
    System.out.println(bob.getName());
    System.out.println("Bob is " + bob.getAge() + " years old");

    Animal sally = new Animal("Sally", 3);
    System.out.println(sally.getName());
    System.out.println(bob.getName());
    
    Cat elly = new Cat("Elly", 4, "Persian Cat");
    System.out.println(elly.getName()  + " is a " + elly.getBreed());
    elly.purr();
    
  }
}

