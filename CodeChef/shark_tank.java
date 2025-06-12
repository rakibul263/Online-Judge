import java.util.Scanner;

public class shark_tank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            int val1 = a * 10;
            int val2 = b * 5;

            if (val1 > val2) {
                System.out.println("FIRST");
            } else if (val2 > val1) {
                System.out.println("SECOND");
            } else {
                System.out.println("ANY");
            }
        }

        sc.close();
    }
}
