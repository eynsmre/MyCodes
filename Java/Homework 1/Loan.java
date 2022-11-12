//class for Loan

public class Loan extends Cash{
  //loan limit
  private double loanLimit;
  
  //overdraft penalty
  private double overdraftPenalty;
  
  //is overdrafted?
  private boolean overdrafted;
  
  //constructor
  //to set interestRate, loanLimit
  //and overdraftPenalty
  public Loan(double interestRate, 
              double loanLimit, 
              double overdraftPenalty){
    super(interestRate);
    this.loanLimit = loanLimit;
    this.overdraftPenalty = overdraftPenalty;
  }
  
  //returns the loan limit
  public double getLoanLimit(){
    return loanLimit;
  }
  
  //sets the loan limit
  public void setLoanLimit(double settingLoan){
    loanLimit = settingLoan;
  }
  
  //returns overdraft penalty
  public double getOverDraftPenalty(){
    return overdraftPenalty;
  }
  
  //sets overdraft penalty
  public void setOverDraftPenalty(double settingOdp){
    overdraftPenalty = settingOdp;
  }
  
  //return if overdrafted.
  public boolean getOverdrafted(){
    return overdrafted;
  }
  
  //set overdrafted.
  public void setOverdrafted(boolean overdrafted){
    this.overdrafted = overdrafted;
  }
  
  //Overriding the process day in Cash class and check if overdrafted.
  @Override
  public void processDay(){
    super.processDay();
   
    if(getBalance() > getLoanLimit()){
      setOverdrafted(true);
    }
    else
      setOverdrafted(false);
  }
  
  //Overriding the process month in Cash class and if overdrafted apply overdraft penalty.
  @Override
  public void processMonth(){
    super.processMonth();
    
    //if the loan was overdrafted, there will be a penalty. 
    if(getOverdrafted() == true){
      setBalance(getBalance() - getOverDraftPenalty());
      setOverdrafted(false);
    }
  }
  
  //Overriding toString method to get interestRate, loanLimit and OverDraftPenalty
  @Override
  public String toString(){
    return "" + getInterestRate() +" : " + getLoanLimit() + " : " + getOverDraftPenalty();
  }
}