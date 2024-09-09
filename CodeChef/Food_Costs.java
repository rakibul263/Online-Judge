import java.util.Scanner;

class Food_Costs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        int result = (x*6)+y;
        System.out.println(result);

        sc.close();
    }
}
