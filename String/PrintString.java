public class PrintString {
        public static void main(String[] args) {
                String s1 = "Java is my favourite language";
                String s2 = new String("Jeremy is good boy");

                System.out.println(s1);
                System.out.println(s2);

                for(int i=0;i<s1.length();i++){
                        System.out.println(s1.charAt(i));                      
                }

                s1.replace('a','o');
                System.out.println(s1);
        }
}
