//Cash class

public class Cash{
  
  //balance ( this is protected because we need to access this from saving )
  private double balance;
  
  //interest rate
  private double interestRate;
  
  //record of the amount of interest earned
  private double earned;
  
  
  
  //constructor takes interest rate as input
  public Cash(double interestRate){
    this.interestRate = interestRate;
  }
  
  //gets balance in the account
  public double getBalance(){
    return balance;
  }
  
  //sets the balance
  public void setBalance(double balance){
    this.balance = balance;
  }
  
  //gets the interest rate.
  public double getInterestRate(){
    return interestRate;
  }
  
  //sets the interest rate as input.
  public void setInterestRate(double interestRate){
    this.interestRate = interestRate;
  }
  
  //transfer reduces the balance.
  public void transfer(double moneyTransferred){
    setBalance(getBalance() - moneyTransferred);
  }
  
  //returns the money that earned from interest.
  public double getEarned(){
    return earned;
  }
  
  //sets the amount of earned money from interest.
  public void setEarned(double earned){
    this.earned = earned;
  }
  
  //increases the money that you earn from interest rate.
  public void processDay(){
    if(getBalance() > 0 ){
      setEarned(getEarned() + getBalance() * (getInterestRate()/365) );
    }
  }
  
  //adds the money you earned from interest rate to the balance
  //after that sets earnedInterest to 0
  public void processMonth(){
 
    setBalance(getBalance()+getEarned());
    setEarned(0);
  }
}