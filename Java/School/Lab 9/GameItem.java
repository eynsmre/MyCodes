public abstract class GameItem {
  
  //every item has a weight and name
  private double weight;
  private String name;
  
  //constructor to get name and weight of the item
  public GameItem(String name, double weight) {
    this.name = name;
    this.weight = weight;
  }
  //return weight
  public double getWeight() {
    return weight;
  }
  //return name
  public String getName() {
    return name;
  }
  
  @Override
  public String toString() {
    return getName();
  }
}