import java.util.Scanner;

public class count_the_notebooks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            System.out.println((n * 1000) / 100);
        }
        sc.close();
    }
}
