import java.time.temporal.ChronoField;
import java.util.*;

public class Main {

    public static int n;

    static String check(String s){
        int n = s.length();
        for(int i = 0; i < n / 2; i++){
            if(s.charAt(i) != s.charAt(n - i - 1)) return "NO";
        }
        return "YES";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        t = sc.nextInt();
        while (t-- > 0){
            String s = sc.next();
            int cnt = 0, n = s.length();
            for(int i = 0; i <= (n-1)/2; i++){
                if(s.charAt(i) != s.charAt(n-i-1)) 
                    cnt++;
            }
            if ((n % 2 == 0 && cnt == 1) || (n % 2 == 1 && cnt <= 1)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    
}