public class HW2{
  
  //This method checks if the strings are same until the taken parameter.
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
  
  
  //This method deletes the spaces before first word of the sentence.
  public static String trimSpacesFromFront(String sentence){
    
    StringBuilder deleteSpacesFront = new StringBuilder();
    int isSpaceFinished = 0;
    
    //check if spaces before than first character
    //has finished. If so, start adding it to stringBuilder
    for(int i=0;i<sentence.length();i++){
      if(isSpaceFinished == 0 && sentence.charAt(i) != ' ')
         isSpaceFinished++;
      if(isSpaceFinished == 1)
           deleteSpacesFront.append(sentence.charAt(i));
    }
    return deleteSpacesFront.toString();
  }
  
  //this method repeats characters as much as the taken parameter repeatTime.
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
  
  //this method counts words in sentence.
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
  
  //this method checks if first sequence is a subsequence of second sequence .
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