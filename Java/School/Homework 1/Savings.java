//Savings class

public class Savings extends Cash{

  //constructor to change interest rate inside Cash class.
  public Savings(double interestRate){
    super(interestRate);
  }
  
  //customer's deposit operation
  public void deposit(double deposit){
    setBalance(getBalance()+deposit);
  }
  
  
  //customer's withdraw operation
  public boolean withdraw(double withdraw){
    if(withdraw <= getBalance()){
      setBalance(getBalance()-withdraw);
      return true;
    }
    return false;
  }
  
  //overriding toString to get interest rate
  @Override
  public String toString(){
    return "" + super.getInterestRate();
  }
}