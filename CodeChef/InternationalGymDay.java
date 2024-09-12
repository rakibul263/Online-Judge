import java.util.*;

public class InternationalGymDay {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int d = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();

            int result = solve(d,x,y);
            System.out.println(result);
        }
    }
    public static int solve(int d, int x, int y) {
        for(int i=0;i<100;i++){
            int remBg = y-i;
            if (remBg < 0) {
                return -1;
            }
            double dp = x*(1-((d*i)/100.0));
            if (remBg >= dp) {
                return i;
            }
        }
        return -1;
    }
}
