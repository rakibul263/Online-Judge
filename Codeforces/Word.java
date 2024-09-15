import java.util.Scanner;

public class Word {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        int len = word.length();
        int sml = 0, cap = 0;
        for(int i=0;i<len;i++) {
            if(word.charAt(i) >= 'a' && word.charAt(i) <= 'z') {
                sml++;
            }else if(word.charAt(i)  >= 'A' && word.charAt(i) <= 'Z') {
                cap++;
            }
        }
        if(sml == cap) {
            System.out.println(word.toLowerCase());
        } else if(sml < cap){
            System.out.println(word.toUpperCase());
        } else{
            System.out.println(word.toLowerCase());
        }
    }
}
