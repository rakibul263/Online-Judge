import java.util.Scanner;

public class Exam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            double re =  a*b/2.0;

            if(c > re){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
