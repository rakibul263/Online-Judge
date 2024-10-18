import java.util.Scanner;

public class Sale_Season {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            if(n <= 100) {
                System.out.println(n);
            }else if(n > 100 && n <= 1000){
                System.out.println(n-25);
            }else if(n > 1000 && n <= 5000){
                System.out.println(n-100);
            }else if(n > 5000){
                System.out.println(n-500);
            }
        }
    }
}
