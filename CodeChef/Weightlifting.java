import java.util.*;

public class Weightlifting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a1 = sc.nextInt();
        int a2 = sc.nextInt();
        int b1 = sc.nextInt();
        int b2 = sc.nextInt();
        int c1 = sc.nextInt();
        int c2 = sc.nextInt();

        int maxA = Math.max(a1, a2);
        int maxB = Math.max(b1, b2);
        int maxC = Math.max(c1, c2);

        System.out.println(maxA+maxB+maxC);
    }
}
