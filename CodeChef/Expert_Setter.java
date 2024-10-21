import java.util.Scanner;

public class Expert_Setter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){
            int a = sc.nextInt();
            int b = sc.nextInt();

            if (b * 2 >= a) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
