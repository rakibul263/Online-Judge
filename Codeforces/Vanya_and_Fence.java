import java.util.Scanner;

public class Vanya_and_Fence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int h = sc.nextInt();

        int width = 0;

        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();

            if (a > h) {
                width += 2;
            } else {
                width += 1;
            }
        }
        System.out.println(width);

        sc.close();
    }
}
