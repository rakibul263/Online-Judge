import java.util.*;

public class Even_Numbers_Here {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();

            List<Integer> vec = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                vec.add(sc.nextInt());
            }

            List<Integer> odd = new ArrayList<>();
            List<Integer> even = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                if (vec.get(i) % 2 == 0) {
                    even.add(vec.get(i));
                } else {
                    odd.add(vec.get(i));
                }
            }

            int x = odd.size();
            int y = even.size();

            if (x == 0) {
                System.out.println(0);
            } else {
                x--;
                int ans = y + 1;
                ans += (x / 2);
                System.out.println(ans);
            }
        }

        sc.close();
    }
}
