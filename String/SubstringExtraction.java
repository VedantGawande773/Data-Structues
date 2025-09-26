public class SubstringExtraction {
  public static void main(String[] args) {
        String str = "I need a car. To react to the work";
        String sub1 = str.substring(6);
        System.out.println(sub1);     
        
        String sub2 = str.substring(2, 10);
        System.out.println("Original String: " + str);
        System.out.println("Substring (2,10): " + sub2);
}
}