import java.util.Scanner;

public class Team {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = 0;
        int n = sc.nextInt();

        while (n-- > 0) {
            int P = sc.nextInt();
            int V = sc.nextInt();
            int T = sc.nextInt();
            int sum = P + V + T;
            if (sum >= 2) {
                count++;
            }
        }
        System.out.println(count);

    }
}
