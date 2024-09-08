import java.util.Scanner;

public class Bit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int X=0;
        while(n-- > 0){
            String str = sc.next();
            if (str == "X++") {
                X++;
            }
            else if (str == "++X") {
                ++X;
            }
            else if (str == "X--") {
                X--;
            } 
            else if (str == "--X") {
                --X;
            }
        }
        System.out.println(X);
    }
}
