import java.util.Scanner;

public class team {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int solve = 0;

        while(t-- > 0){
            int petya = sc.nextInt();
            int vasya = sc.nextInt();
            int tonya = sc.nextInt();

            if((petya+vasya+tonya )>=2){
                solve++;
            }
        }
        System.out.println(solve);
    }
}
