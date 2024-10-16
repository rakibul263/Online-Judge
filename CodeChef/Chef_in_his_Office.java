import java.util.Scanner;

public class Chef_in_his_Office {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            int add_friday = 0;
            int four_days_work = x*4;
            if(y<x){
               add_friday = four_days_work + y;
               System.out.println(add_friday);
            }else{
                System.out.println(four_days_work);
            }
        }
    }
}
