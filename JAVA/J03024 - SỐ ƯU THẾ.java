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
            int chan = 0, le = 0, ok = 1;
            StringBuilder sb = new StringBuilder(s);
            int n = sb.length();
            for (int i = 0; i < n; i++){
                char k = sb.charAt(i);
                if (Character.isDigit(k) && k % 2 == 0) chan++;
                else if(Character.isDigit(k) && k % 2 == 1) le++;
                else if(Character.isLetter(k)){
                    ok = 0; 
                    break;
                }
            }
            if(ok == 0) System.out.println("INVALID");
            else{
                if((chan > le && n % 2 == 0) || (le > chan && n % 2 == 1)) System.out.println("YES");
                else System.out.println("NO");
            }
        }
    }

    
}