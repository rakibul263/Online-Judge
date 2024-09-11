import java.util.*;

public class Helpfull_math {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String[] numbers = s.split("\\+");

        int[] numArray = new int[numbers.length];
        for (int i = 0; i < numbers.length; i++) {
            numArray[i] = Integer.parseInt(numbers[i]);
        }

        Arrays.sort(numArray);

        StringBuilder sortedSum = new StringBuilder();
        for (int i = 0; i < numArray.length; i++) {
            sortedSum.append(numArray[i]);
            if (i != numArray.length - 1) {
                sortedSum.append("+");
            }
        }

        System.out.println(sortedSum.toString());

        sc.close();
    }
}
