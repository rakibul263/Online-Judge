import java.util.Scanner;

public class A_Primary_Task {

    public static void solve(Scanner sc) {
        String s = sc.next();
        if (s.length() >= 3) {
            if (s.charAt(0) == '1' && s.charAt(1) == '0' &&
                    (s.charAt(2) >= '2' || (s.length() >= 4 && s.charAt(2) >= '1'))) {
                System.out.println("YES");
                return;
            }
        }

        System.out.println("NO");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            solve(sc);
        }
        sc.close();
    }
}
