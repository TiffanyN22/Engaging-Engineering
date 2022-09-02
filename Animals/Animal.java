public class Animal //class signature
{
  //instance variables, fields, variable declaration
  private String name;
  private int age;
  
  //constructor
  public Animal (String name, int age) {
    this.name = name;
    this.age = age;
  }
  
  //methods (or functions, procedures)
  public String getName(){
    return name;
  }

  public int getAge(){
    return age;
  }

  //mutator or setter methods
  public void setName(String newName){
    name = newName;
  }

  public void setAge(int newAge){
    age = newAge;
  }

}