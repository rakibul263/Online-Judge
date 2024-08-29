import java.util.*;

public class Magical_World {
    public static int Solve(int x, int y, int z) {
        if (x * y <= z * z) {
            return 0;
        } else if (y <= z * z || x <= z * z) {
            return 1;
        } else {
            return 2;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();

            System.out.println(Solve(x, y, z));
        }
    }
}
