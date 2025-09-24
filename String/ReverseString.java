// In Java, String is immutable, so you cannot swap characters directly like str[left].
// You need to use a mutable structure (char[]) to swap.

public class ReverseString {
    public static void main(String[] args) {
        String str = "hello";

        // Convert string to char array (mutable)
        char[] chars = str.toCharArray();

        int left = 0, right = chars.length - 1;

        // Swap using two pointers
        while (left < right) {
            char temp = chars[left];
            chars[left] = chars[right];
            chars[right] = temp;

            left++;
            right--;
        }

        // Convert back to String
        String reversed = new String(chars);
        System.out.println("Reversed: " + reversed);
    }
}

        //OR
/*
 public class ReverseString {
    public static void main(String[] args) {
        String str = "hello";

        String reversed = new StringBuilder(str).reverse().toString();

        System.out.println("Reversed: " + reversed);
    }
}
 */