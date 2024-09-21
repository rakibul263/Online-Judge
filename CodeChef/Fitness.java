import java.util.Scanner;

public class Fitness {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int come_and_go = n*2;
            System.out.println(come_and_go*5);
        }
        sc.close();
    }
}
