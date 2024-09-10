import java.util.Scanner;

public class Beautiful_Matrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ara[][] = new int[5][5];
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                ara[i][j] = sc.nextInt();
            }
        }
        int row = 0, col = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if(ara[i][j] == 1){
                    row = i;
                    col = j;
                }
            }
        }
        int result = Math.abs(row-2)+Math.abs(col-2);
        System.out.println(result);
    }
}
