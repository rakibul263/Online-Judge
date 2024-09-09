import java.util.Scanner;

public class Christmas_Greetings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        if(n==25){
            System.out.println("CHRISTMAS");
        }else{
            System.out.println("ORDINARY");
        }
        sc.close();
    }
}
