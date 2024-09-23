import java.util.Scanner;

public class Masterchef_finals {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            int X = sc.nextInt();

            if (X <= 10) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
