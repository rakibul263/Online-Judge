import java.util.Scanner;

public class Non_Primes_101 {

    public static boolean isPrime(int num) {
        if (num <= 1)
            return false;
        if (num == 2)
            return true;
        if (num % 2 == 0)
            return false;
        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            int[] A = new int[N];

            for (int i = 0; i < N; i++) {
                A[i] = sc.nextInt();
            }

            boolean found = false;
            for (int i = 0; i < N && !found; i++) {
                for (int j = i + 1; j < N; j++) {
                    if (!isPrime(A[i] + A[j])) {
                        System.out.println((i + 1) + " " + (j + 1));
                        found = true;
                        break;
                    }
                }
            }
            if (!found) {
                System.out.println("-1");
            }
        }

        sc.close();
    }
}
