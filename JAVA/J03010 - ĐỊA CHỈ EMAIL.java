import java.time.temporal.ChronoField;
import java.util.*;

public class Main {

    public static int n;

    static int[] process(int[] a){
        int[] b = new int[n];
        int x = 0;
        for(int i = 0; i < a.length; i++){
            if(a[i] != -1) b[x++] = a[i];
        }
        return b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        t = sc.nextInt();
        sc.nextLine();
        Map<String,Integer> mp = new TreeMap();
        Vector<String> answers = new Vector<String>();
        while (t-- > 0){
            String s = sc.nextLine();
            Vector<String> a = new Vector<String>();
            String x = "";
            s = s.toLowerCase() + " ";
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == ' ') {
                    if (x != "") {
                        a.add(x);
                        x = "";
                    }
                } else {
                    x += s.charAt(i);
                }
            }
            String ans = a.get(a.size() - 1).toLowerCase();
            for (int i = 0; i < a.size() - 1; i++) {
                String k = a.get(i);
                ans += k.substring(0,1).toLowerCase();
            }
            mp.put(ans,mp.getOrDefault(ans,0)+1);
            if(mp.get(ans) > 1) ans += String.valueOf(mp.get(ans));
            ans += "@ptit.edu.vn";
            answers.add(ans);
        }
        int sz = answers.size();
        for(String i : answers){
            System.out.println(i);
        }
    }

    
}