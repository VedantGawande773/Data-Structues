public class VowelsConsonent {
    public static void main(String[] args) {
        String str = "This is to find vowels and consonent";
        int vowels = 0, consonants = 0;

        for (int i = 0; i < str.length(); i++) {
            char ch = Character.toLowerCase(str.charAt(i)); 

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                if (Character.isLetter(ch))  
                    consonants++;
            }
        }

        System.out.println("Vowels: " + vowels + ", Consonants: " + consonants);
    }
}

