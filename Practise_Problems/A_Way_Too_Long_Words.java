import java.util.Scanner;

public class Way_Too_Long_Words {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n-- > 0) {
            String s = sc.next();
            int ln = s.length();

            if (ln > 10) {
                System.out.println("" + s.charAt(0) + (ln - 2) + s.charAt(ln - 1));
            } else {
                System.out.println(s);
            }
        }

    }
}
