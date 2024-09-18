import java.util.Scanner;

public class FoodCosts {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.print(x*6+y);

        sc.close();
    }
}
