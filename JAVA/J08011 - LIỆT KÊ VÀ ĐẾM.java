import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        Map<String,Integer> map = new HashMap<>();
        List<String> ls = new ArrayList<>();
        while(sc.hasNext()) {
            s = sc.next();
            if(check(s)) {
                if(map.getOrDefault(s,0) == 0) ls.add(s);
                map.put(s, map.getOrDefault(s,0) + 1);
            }
        }
        Collections.sort(ls, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return map.get(o2) - map.get(o1);
            }
        });
        for(String x : ls) {
            System.out.println(x + " " + map.get(x));
        }


    }

    public static boolean check(String s) {
        for(int i = 0; i < s.length() - 1; i++) {
            if(s.charAt(i) > s.charAt(i+1)) return false;
        }
        return true;
    }

}