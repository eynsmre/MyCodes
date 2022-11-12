//Class of the customer's personal informations.

public class Customer{
  
 //Customer's first name
 private String firstName;
 //Customer's last name
 private String lastName;
 //Customer's savings with type of Savings
 private Savings savings;
 //Customer's loan with type of Loan 
 private Loan loan;
 //Date with type of Date
 private Date date;

 
 //Constructor to get name, savings, loan and date
 public Customer(String firstName, String lastName, Savings savings, Loan loan, Date date){
   this.firstName = firstName;
   this.lastName = lastName;
   this.savings = savings;
   this.loan = loan;
   this.date = date;
 }
 
 //gets the first name of the customer
 public String getFirstName(){
   return firstName;
 }
 
 //sets the first name of the customer
 public void setFirstName(String firstName){
   this.firstName = firstName;
 }
 
  //gets the last name of the customer
 public String getLastName(){
   return lastName;
 }
 
  //sets the last name of the customer
 public void setLastName(String lastName){
   this.lastName = lastName;
 }
 
 //gets the savings of the customer
 public Savings getSavings(){
   return savings;
 }
 
 //gets the loan of the customer
 public Loan getLoan(){
   return loan;
 }
 
 //gets the date
 public Date getDate(){
   return date;
 }
 
 //sets the date
 public void setDate(Date date){
   this.date = date;
 }
 
 // Returns savings balance subtracted by the Loan balance.
 public double getCurrentValue(){
  return getSavings().getBalance() - getLoan().getBalance();
}
 
 //payment to be transferred inside the customer's account.
 public void deposit(double deposit){
   getSavings().setBalance(getSavings().getBalance() + deposit);
 }
 
 //Loan payment: reduces the customer's loan
 public void payLoan(double loanPayment){
   getLoan().setBalance(getLoan().getBalance() - loanPayment);
 }
 
 //Customer withdrawal, there will be new amount in the account
 public boolean withdraw(double withdrawal){
   return getSavings().withdraw(withdrawal);
 }

 //increment's the date and do some extras
 public void incrementDate(){
   int month = getDate().getMonth();
   
   getDate().incrementDay();
   //if savings balance less than 0, add the amount to loan balance
   if(getSavings().getBalance()<0){ 
     getLoan().setBalance(loan.getBalance()+savings.getBalance());
     getSavings().setBalance(0);
   }
   
   getSavings().processDay();
   getLoan().processDay();
   
   //if month have changed applies processMonth methods to loan and savings
   if(date.getMonth() != month){
     getSavings().processMonth();
     getLoan().processMonth();
   }
 }
 
}

 
