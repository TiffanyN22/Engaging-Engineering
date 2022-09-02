public class Cat extends Animal{
  private String breed;
  
  public Cat(String name, int age, String breed){
    super(name, age);
    this.breed = breed;
  }

  //accessors
  public String getBreed(){
    return breed;
  }

  //purr methods
  public void purr(){
    System.out.println(super.getName() + " says meow");
  }
}

