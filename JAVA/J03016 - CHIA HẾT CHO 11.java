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
            BigInteger b = a.divide(new BigInteger("11"));
            if(a.compareTo(b.multiply(new BigInteger("11"))) == 0) {
                System.out.println(1);
            } else System.out.println(0);
        }
    }
}