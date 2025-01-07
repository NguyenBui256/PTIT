import java.math.BigInteger;
import java.time.Duration;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            sc.nextLine();
            String s = sc.nextLine();
            int k = sc.nextInt();
            if(s.length() < 26) {
                System.out.println("NO");
                continue;
            }
            Map<Character, Integer> map = new HashMap<>();
            for(int i = 0; i < s.length(); i++) {
                map.put(s.charAt(i), map.getOrDefault(s.charAt(i), 0) + 1);
            }
            int cnt = 0;
            for(char c = 'a'; c <= 'z'; c++) {
                if(!map.containsKey(c)) cnt++;
            }
            if(cnt > k) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        }
    }
}