public abstract class Food extends GameItem{
  //food items have calori
  private double calori;
  
  //constructor for foods to get name, weight and calori
  public Food(String name, double weight, int calori){
    super(name,weight);
    this.calori = calori;
  }
  
  public double getCalori(){
    return calori;
  }
  public void setCalori(double newCalori){
    calori = newCalori;
  }
}
