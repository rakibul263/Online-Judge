import java.util.Scanner;
import java.util.Arrays;

public class Maximise_Sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int a[] = new int[n];
            long sum = 0;
            int minVal = Integer.MAX_VALUE;
            int count = 0;

            for (int i = 0; i < n; ++i) {
                a[i] = sc.nextInt();
                sum += Math.abs(a[i]);
                if (a[i] < 0) {
                    count++;
                }
                minVal = Math.min(minVal, Math.abs(a[i]));
            }

            if (count % 2 == 1) {
                sum -= 2 * minVal;
            }

            System.out.println(sum);
        }
    }
}
