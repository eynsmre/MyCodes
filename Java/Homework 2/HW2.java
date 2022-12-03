public class HW2{
  
  //This method checks if the taken strings are same until the taken integer parameter and returns boolean.
  public static boolean samePrefix(String first, String second, int control){
    if(control > first.length() || control > second.length())
      return false;
    
    //check until the *control* if any letter is different return false
    //if loop has finished without return, it means all letters are same so return true.
    for(int i=0 ; i<control ; i++){
      if(first.charAt(i) != second.charAt(i))
        return false;
    }
    return true;
  }
  
  
  //This method takes a string parameter and deletes all spaces only before first non-space character.
  public static String trimSpacesFromFront(String string){
    
    StringBuilder deleteSpacesFront = new StringBuilder();
    int i = 0;
    
    //find the index of first non-space character.
    while(i<string.length() && string.charAt(i) == ' ')
      i++;
    
    //append everything after the first non-space character to the StringBuilder.
    while(i<string.length()){
      deleteSpacesFront.append(string.charAt(i));
      i++;
    }
    
    return deleteSpacesFront.toString();
  }
  
  //this method takes a String and repeats every characters of taken string
  //as much as the taken integer parameter repeatTime. Returns String.
  public static String repeatChars(String text, int repeatTime){
    
    StringBuilder repeatedVersion = new StringBuilder();
    int i = 0;
    
    // i < text.length()*repeatTime because I used i/repeatTime
    // append character at i/repeatTime(append  same character as much as repeatTime)  
      while(i < text.length()*repeatTime){
        repeatedVersion.append(text.charAt(i/repeatTime));
        i++;
      }
      
      return repeatedVersion.toString();
    }
  
  //this method counts words of taken String parameter and returns integer.
  public static int countWords(String text){
    int i = 1, counter = 0;
    
    //if input String is an empty string return 0
    if(text.length() == 0)
      return counter;
      
    
    //if there is a character before space it means there is one more word.
    //if last character isn't space, last word haven't counted so increase counter by one.
    while(i<text.length()){
      if(text.charAt(i)==' ' && text.charAt(i-1)!=' ')
        counter++;
      
      i++;
    }
    
     if(text.charAt(i-1)!=' ')
        counter++;
     
    return counter;
  }
  
  //this method checks if first taken String parameter is a subsequence of second taken String parameter.
  //Returns boolean.
  public static boolean subSequence(String sequence1, String sequence2){
    
    int i = 0, j = 0;
    
    //empty sequence is subsequence of all sequences.
    if(sequence1.length() == 0)
      return true;
        
    //number of elements of subsequence cannot be more than supersequence.
    if(sequence1.length() > sequence2.length())
      return false;
    
    // if a letter in first sequence have found check the next letter, order is important.
    while(i<sequence1.length() && j<sequence2.length()){
      if(sequence1.charAt(i) == sequence2.charAt(j))
        i++;
      
      j++;
    }
    return i == sequence1.length();
  }     
  
}