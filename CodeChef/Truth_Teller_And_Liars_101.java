import java.util.Scanner;

public class Truth_Teller_And_Liars_101 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            long m = sc.nextLong();

            if (n <= m) {
                System.out.println(-1);
            } else {
                System.out.println(m + m + 1);
            }
        }
    }
}
