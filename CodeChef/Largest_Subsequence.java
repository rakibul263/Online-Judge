import java.util.*;

public class Largest_Subsequence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            String a = sc.next();
            int cnt = 0;
            
            for (int i = 0; i < n; i++) {
                if (a.charAt(i) == a.charAt(0)) 
                    cnt = Math.max(cnt, i + 1);
                if (a.charAt(i) == a.charAt(n - 1)) 
                    cnt = Math.max(cnt, n - i);
            }
            System.out.println(cnt);
        }
        sc.close();
    }
}