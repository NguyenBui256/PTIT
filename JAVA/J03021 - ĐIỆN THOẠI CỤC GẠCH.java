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
            s = s.toUpperCase();
            StringBuilder sb = new StringBuilder(s);
            int n = sb.length();
            for (int i = 0; i < n; i++){
                char k = sb.charAt(i);
                if (k == 'A' || k == 'B' || k == 'C') sb.setCharAt(i, '2'); 
                else if(k == 'D' || k == 'E' || k == 'F') sb.setCharAt(i, '3');
                else if(k == 'G' || k == 'H' || k == 'I') sb.setCharAt(i, '4');
                else if(k == 'J' || k == 'K' || k == 'L') sb.setCharAt(i, '5');
                else if(k == 'M' || k == 'N' || k == 'O') sb.setCharAt(i, '6');
                else if(k == 'P' || k == 'Q' || k == 'R' || k == 'S') sb.setCharAt(i, '7');
                else if(k == 'T' || k == 'U' || k == 'V') sb.setCharAt(i, '8');
                else sb.setCharAt(i, '9');
            }
            System.out.println(check(sb.toString()));
        }
    }

    
}