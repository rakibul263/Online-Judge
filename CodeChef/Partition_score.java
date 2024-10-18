import java.util.*;

public class Partition_score {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            long[] ps = new long[n];

            for (int i = 0; i < n; i++) {
                ps[i] = sc.nextLong();
            }

            Arrays.sort(ps);

            long result;
            if (k == 1) {
                result = (ps[n - 1] * 2) + (ps[n - 2] + ps[0]);
            } else {
                result = ps[n - 1] + ps[0] + ps[n - 2] + ps[n - 2 - k + 1];
            }

            System.out.println(result);
        }

        sc.close();
    }
}
