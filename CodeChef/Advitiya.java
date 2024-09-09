import java.util.Scanner;

public class Advitiya {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n>15 && n<18) {
            System.out.println("ADVITIYA");
        }else{
            System.out.println("WAITING FOR ADVITIYA");
        }
    }
}
