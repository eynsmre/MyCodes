// Class representing a integer number, which extends the RationalN class.
// An Integer number is also a Rational number, Real number and Complex number.
public class NaturalN extends IntegerN{
  
  /**
   * Constructs a natural number with the given value.
   *
   * @param num the value of the natural number
   * @throws ArithmeticException if the value is less than 0
   */
  public NaturalN(int num){
    super(num);
    
    if(num < 0)
      throw new ArithmeticException("Natural numbers cannot be lower than 0.");   
  }  
  
}
