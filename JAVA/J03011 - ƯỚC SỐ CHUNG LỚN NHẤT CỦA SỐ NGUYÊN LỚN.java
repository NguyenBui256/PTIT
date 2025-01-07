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
            String a = sc.nextLine();
            String b = sc.nextLine();
            BigInteger a1 = new BigInteger(a);
            BigInteger b1 = new BigInteger(b);
            System.out.println(b1.gcd(a1));
        }
    }
}