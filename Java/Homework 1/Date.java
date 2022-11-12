
//4.1 The Date Class
public class Date extends Object{
 
  //day
  private int day;
  
  //month
  private int month;
  
  //year
  private int year;
  
  //constructor to get day, month and year for Date class
  //and checks if they are valid values.
  public Date(int day, int month, int year){
    if(day>=1 && day<=31){
       this.day = day;
    }
    if(month>=1 && month<=12){
      this.month = month;
    }
    
    this.year = year;
  }
  //tells which day of the month we are in.
  public int getDay(){
    return day;
  }
  
  //sets the month
  public void setDay(int day){
    this.day = day;
  }
  
  //gets the month.
  public int getMonth(){
    return month;
  }
  
  //sets the month.
  public void setMonth(int month){
    this.month = month;
  }
  
  //gets  the year
  public int getYear(){
    return year;
  }
  
  //sets the year
  public void setYear(int year){
    this.year = year;
  }
  
  //increments the day. if day is greater than 31 makes it 1 again.
  // does the same to month and year too.
  public void incrementDay(){
    if(getDay() != 31)
      setDay(getDay()+1);
    else{
      setDay(1);
      setMonth(getMonth() + 1);
      if(getMonth() > 12){
        setMonth(1);
        setYear(getYear()+1);
      }
    }
  }
  
  //overrides the toString method inherited from Object
  //If we would use Object's toString method result would be something like Date@4f9dce61
  @Override
  public String toString(){
    return getDay() + "/" + getMonth() + "/" + getYear();
  }
  
  //overrides the equals method of object, checks if the day and the month are same. 
  @Override
  public boolean equals(Object anotherDate){
   
    //if the obj isn't same type with Date so return false.
    if(anotherDate instanceof Date){
      Date date1 = (Date)anotherDate;
      if(date1.day == this.day &&
         date1.month == this.month){
        return true;
      }
    }
    return false;
  }  
  
}