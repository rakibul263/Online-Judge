import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        Set<Integer> importantNumbers = new HashSet<>();

        // Generate all important numbers of the form 10^x with x >= 2
        for (int x = 2; x <= 9; x++) {
            int importantNumber = (int) Math.pow(10, x);
            while (importantNumber > 0) {
                importantNumbers.add(importantNumber);
                importantNumber /= 10;
            }
        }

        // Check each number on the board
        for (int i = 0; i < t; i++) {
            int a = scanner.nextInt();
            if (importantNumbers.contains(a)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        scanner.close();
    }
}
