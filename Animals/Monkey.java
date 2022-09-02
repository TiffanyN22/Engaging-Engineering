public class Monkey extends Animal{
  private String breed;
  private int bananas;

  public Monkey(String name, int age, String breed, int bananas){
    super(name, age);
    this.breed = breed;
    this.bananas = bananas;
  }

  //accessors
  public String getBreed(){
    return breed;
  }

  public int getBananas(){
    return bananas;
  }

  //food methods
  public void collectBanana(){
    bananas++;
  }

  public void collectBanana(int collectedBananas){
    bananas+=collectedBananas;
  }

  public void eat(){
    bananas--;
  }

  public void eat(int bananasEaten){
    bananas-=bananasEaten;
  }

  //name method
  public String getName(){
    return super.getName() + " the " + breed;
  }
  
  public String getOnlyName(){
    return super.getName();
  }
}

