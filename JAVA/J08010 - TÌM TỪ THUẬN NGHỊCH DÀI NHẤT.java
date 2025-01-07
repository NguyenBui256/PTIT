import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        Map<String,Integer> map = new HashMap<>();
        List<String> ls = new ArrayList<>();
        int ans = 0;
        while(sc.hasNext()) {
            s = sc.next();
            if(check(s)) {
                if(map.getOrDefault(s,0) == 0) ls.add(s);
                map.put(s, map.getOrDefault(s,0) + 1);
                ans = Math.max(ans, s.length());
            }
        }
        for(String x : ls) {
            if(x.length() == ans) {
                System.out.println(x + " " + map.get(x));
            }
        }


    }

    public static boolean check(String s) {
        int n = s.length();
        for(int i = 0; i <= n / 2; i++) {
            if(s.charAt(i) != s.charAt(n - 1 - i)) {
                return false;
            }
        }
        return true;
    }
}