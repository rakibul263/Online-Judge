import java.util.Scanner;

public class Word_Capitalization {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();

        String capitalizedWord = word.substring(0, 1).toUpperCase() + word.substring(1);

        System.out.println(capitalizedWord);

    }
}
