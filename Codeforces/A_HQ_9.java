import java.util.*;

public class A_HQ_9 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        int len = str.length();

        boolean flag = false;
        for (int i = 0; i < len; i++) {
            char ch = str.charAt(i);
            if (ch == 'H' || ch == 'Q' || ch == '9') {
                flag = true;
                break;
            }
        }
        if (flag) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}