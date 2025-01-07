import java.math.BigInteger;
import java.time.Duration;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); sc.nextLine();
        while(t-- > 0) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger c = a.divide(b);
            BigInteger d = b.divide(a);
            if (a.compareTo(b.multiply(c)) == 0 || b.compareTo(a.multiply(d)) == 0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}