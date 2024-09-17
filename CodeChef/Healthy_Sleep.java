import java.util.*;
public class Healthy_Sleep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int H = sc.nextInt();

        if (H < 8) {
            System.out.println("LESS");
        } else if (H == 8) {
            System.out.println("PERFECT");
        } else {
            System.out.println("MORE");
        }

        sc.close();
    }
}
