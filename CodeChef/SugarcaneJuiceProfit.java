import java.util.Scanner;

public class SugarcaneJuiceProfit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) {
            int N = sc.nextInt();
            int totalIncome = 50 * N;
            int expenses = (int) (totalIncome * 0.2 * 2) + (int) (totalIncome * 0.3);
            int profit = totalIncome - expenses;
            System.out.println(profit);
        }
        sc.close();
    }
}
