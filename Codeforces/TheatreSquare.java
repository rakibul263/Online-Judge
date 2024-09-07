import java.util.Scanner;

public class TheatreSquare{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long m = sc.nextLong();
        long a = sc.nextLong();

        long flagstones_n = (n + a - 1) / a;
        long flagstones_m = (m + a - 1) / a;

        long result = flagstones_n * flagstones_m;
        System.out.println(result);

        sc.close();
    }
}
