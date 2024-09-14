import java.util.Scanner;

public class Lucky_clover {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int totalLeaves = 4 + 3 * (n - 1);
        System.out.println(totalLeaves);
    }
}
