import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n; n = sc.nextInt();
            double m = Math.sqrt(1.0*n);
            m = Math.floor(m);
            if(m * m == n) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}