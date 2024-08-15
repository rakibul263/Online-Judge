import java.util.Scanner;

public class ImportantInteger {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        for (int i = 0; i < t; i++) {
            int num = scanner.nextInt();
            if (isImportantInteger(num)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        scanner.close();
    }

    private static boolean isImportantInteger(int num) {
        // Check if the number has more than one digit and all digits are '0' except the
        // first digit
        if (num < 10 || Integer.toString(num).matches("10+")) {
            return true;
        } else {
            return false;
        }
    }
}
