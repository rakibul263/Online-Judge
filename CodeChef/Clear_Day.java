import java.util.Scanner;

public class Clear_Day {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int ans = 7-a-b;
        System.out.println(ans);
    }
}
