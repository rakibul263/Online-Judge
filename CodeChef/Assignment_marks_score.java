import java.util.*;

class Codechef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            int cScore = 0;

            for (int i = 0; i < N; i++) {
                cScore += sc.nextInt();
            }

            int tMarks = 100 * (N + 1);
            double pMarks = 0.5 * tMarks;
            double rScore = pMarks - cScore;

            if (rScore > 100) {
                System.out.println(-1);
            } else {
                System.out.println(Math.max(0, (int) Math.ceil(rScore)));
            }
        }

        sc.close();
    }
}
