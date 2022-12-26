// Class representing a complex number, with real and imaginary components
public class ComplexN{
  //real part of number
  private double real;
  //imaginary part of number
  private double imaginary;
  
  /**
   * Constructs a complex number with the given real and imaginary parts.
   *
   * @param real the real part of the complex number
   * @param imaginary the imaginary part of the complex number
   */
  public ComplexN(double real, double imaginary){
    this.real = real;
    this.imaginary = imaginary;
  }
  
  /**
   * Returns the real part of this complex number.
   *
   * @return the real part of this complex number
   */
  public double getRealPart(){
    return real;
  }
  
  /**
   * Returns the imaginary part of this complex number.
   *
   * @return the imaginary part of this complex number
   */
  public double getImaginaryPart(){
    return imaginary;
  }
  
  /**
   * Returns a string representation of this complex number in the form "a+bi", where a is the real part and b is the imaginary part.
   *
   * @return a string representation of this complex number
   */
  @Override
  public String toString(){
    if(getImaginaryPart() > 0)
      return getRealPart() + "+" + getImaginaryPart() + "i";
    else if(getImaginaryPart() < 0)
      return getRealPart() + "" + getImaginaryPart() + "i";
    else
      return getRealPart() + "";
  }
  
  /**
   * Determines whether this complex number is equal to the given object.
   *
   * @param obj the object to compare with this complex number
   * @return true if the object is a complex number with the same real and imaginary parts as this complex number, false otherwise
   */
  @Override
  public boolean equals(Object obj){
    if(obj instanceof ComplexN){
      ComplexN number = (ComplexN)obj;
      return (this.getRealPart() == number.getRealPart() && 
              this.getImaginaryPart() == number.getImaginaryPart());
    }
    return false;
  }
  
}
