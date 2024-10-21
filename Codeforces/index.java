import java.util.*;

class Person{
    String name;
    Person(String name) {
        this.name = name;
    }

    public int Substring_match(String substring) {
        int count = 0;
        int index = 0;

        while ((index = name.indexOf(substring, index)) != -1) {
            count++;
            index += substring.length();
        }
        return count;
    }
}



public class q1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Person p1 = new Person("Salam");
        Person p2 = new Person("Rafiq");
        Person p3 = new Person("Sarjis");
        Person p4 = new Person("Hasnat");

        System.out.print("Input Substring : ");
        String s = sc.nextLine();

        Person[] pe = {p1, p2, p3, p4};
        Person best_match = null;
        int maxMatches = 0;

        for (Person person : pe) {
            int matches = person.Substring_match(s);
            if (matches > maxMatches) {
                maxMatches = matches;
                best_match = person;
            }
        }

        if (best_match != null && maxMatches > 0) {
            System.out.println(best_match.name);
        } else {
            System.out.println("NOT FOUND");
        }
    }
}