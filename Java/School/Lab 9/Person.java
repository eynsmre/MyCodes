public class Person{
  
  //person has a strength, intelligence and energy as a point
  private int strength;
  private int intelligence;
  private double energy = 10.0;
  GameItem itemCarrying;
  
  //constructor for Person class to get person's strength, intelligence and energy
  public Person(int strength, int intelligence, double energy){
    this.strength = strength;
    this.intelligence = intelligence;
    this.energy = energy;
  }
  
  //return strength
  public int getStrength(){
    return strength;
  }
  
  //make strength equal to inputted new amount 
  public void setStrength(int newAmount){
    strength = newAmount;
  }
  
  //return intelligence
  public int getIntelligence(){
    return intelligence;
  }
  
  //make intelligence equal to new inputted amount
  public void setIntelligence(int newAmount){
    intelligence = newAmount;
  }
  
  //return energy
  public double getEnergy(){
    return energy;
  }
  
  //make energy equal to new inputted amount
  public void setEnergy(double newAmount){
    energy = newAmount;
  }
  
  public GameItem getItemCarrying(){
    return itemCarrying;
  }
  public void setItemCarrying(GameItem itemCarrying){
    this.itemCarrying = itemCarrying;
  }
  
  public boolean pickup(GameItem o){
    if(o.getWeight() < this.strength && itemCarrying == null){
      setItemCarrying(o);
      return true;
    }    
    return false;
  }
  public GameItem drop(){
    if(itemCarrying == null)
      return null;
    
    return itemCarrying = null;
  }
  
  public void eat(){
    if(itemCarrying instanceof Food){
      //itemCarrying = (Food)itemCarrying;
      this.setEnergy(this.getEnergy() + ((Food)this.getItemCarrying()).getCalori());
      this.drop();
    }
  }
}