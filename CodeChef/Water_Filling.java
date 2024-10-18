import java.util.Scanner;

public class Water_Filling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            int sum = a+b+c;
            if(sum == 1) {
                System.out.println("Water filling time");
            }else if(sum == 0){
                System.out.println("Water filling time");
            }else {
                System.out.println("Not now");
            }
        }
    }
}
