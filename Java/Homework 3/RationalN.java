// Class representing a rational number, which extends the RealN class.
// Rational numbers are also Real numbers and Complex numbers.
public class RationalN extends RealN{
  
  private int numerator;
  private int denominator;
  
  /**
   * Constructs a rational number with the given numerator and denominator.
   *
   * @param numerator the numerator of the rational number
   * @param denominator the denominator of the rational number
   * @throws ArithmeticException if the denominator is 0
   */
  public RationalN(int numerator, int denominator){
    super((double)numerator/denominator);
    
    if(denominator == 0)
      throw new ArithmeticException("The denominator is 0. Undefined.");        
    
    this.numerator = numerator;
    this.denominator = denominator;
  }
  
  /**
   * Returns the numerator of this rational number.
   * @return the numerator of this rational number
   */
  public int getNumerator(){
    return numerator;
  }
  
  /**
   * Returns the denominator of this rational number.
   *
   * @return the denominator of this rational number
   */
  public int getDenominator(){
    return denominator;
  }
  
  /**
   * Returns a string representation of this rational number in the form "a/b", where a is the numerator and b is the denominator.
   *
   * @return a string representation of this rational number
   */
  @Override
  public String toString(){
    int gcd = gcd(getNumerator(), getDenominator());
    
    if(getDenominator()/gcd == 1 || getNumerator() == 0)
      return getNumerator()/gcd + "";
    
    if(getNumerator()<0 && getDenominator()<0)
      return getNumerator()/gcd + "/" + getDenominator()/gcd;
    
    else if((getDenominator()<0 && gcd>0) || (getNumerator()<0 && gcd<0))
      return -1 * getNumerator() / gcd + "/" + -1 * getDenominator() / gcd;
    
    return getNumerator()/gcd + "/" + getDenominator()/gcd; 
  }
  
  /**
   * Returns the greatest common divisor (GCD) of the given integers a and b.
   *
   * @param a the first integer
   * @param b the second integer
   * @return the GCD of a and b
   */
  private int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
  }
  
}
