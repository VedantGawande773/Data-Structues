public class StringComparison {
   public static void main(String[] args) {
        // Case 1: String literals
        String a = "Java";
        String b = "Java";

        System.out.println(a == b);          // true  ✅ same reference from String pool
        System.out.println(a.equals(b));     // true  ✅ same content
        System.out.println(a.equalsIgnoreCase(b)); // true ✅ same content, same case

        // Case 2: new String() → forces new object
        String x = new String("Java");
        String y = new String("Java");

        System.out.println(x == y);          // false ❌ different objects
        System.out.println(x.equals(y));     // true  ✅ same content
        System.out.println(x.equalsIgnoreCase(y)); // true ✅ same content, same case

        // Case 3: Different case
        String s1 = "Java";
        String s2 = "JAVA";

        System.out.println(s1.equals(s2));        // false ❌ case-sensitive
        System.out.println(s1.equalsIgnoreCase(s2)); // true ✅ ignores case
    }     
}
