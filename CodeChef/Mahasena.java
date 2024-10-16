import java.util.Scanner;

public class Mahasena {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < N; i++) {
            int weapons = sc.nextInt();
            if (weapons % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        if (evenCount > oddCount) {
            System.out.println("READY FOR BATTLE");
        } else {
            System.out.println("NOT READY");
        }

        sc.close();
    }
}