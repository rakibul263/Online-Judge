import java.util.Scanner;

class Cricket_World_Cup_Qualifier {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n>=12){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
        sc.close();
    }
}
