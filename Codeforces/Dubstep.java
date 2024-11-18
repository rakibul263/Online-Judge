import java.util.Scanner;

public class Dubstep {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String song = sc.nextLine();
        String[] words = song.split("WUB");
        for (String word : words) {
            if (!word.equals("")) {
                System.out.print(word + " ");
            }
        }
        sc.close();
    }
}