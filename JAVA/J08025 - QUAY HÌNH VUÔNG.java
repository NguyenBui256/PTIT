import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            List<Integer> a = new ArrayList<>();
            List<Integer> b = new ArrayList<>();
            for(int i = 0; i < 6; i++) a.add(sc.nextInt());
            for(int i = 0; i < 6; i++) b.add(sc.nextInt());
            Queue<List<Integer>> q = new LinkedList<>();
            Map<List<Integer>, Integer> map = new HashMap<>();
            q.add(a);
            map.put(a,0);
            while(!q.isEmpty()) {
                if(q.peek().equals(b)) {
                    System.out.println(map.get(b));
                    break;
                }
                List<Integer> tmp = q.poll();
                List<Integer> l = left(tmp);
                List<Integer> r = right(tmp);
                if(!map.containsKey(l)) {
                    q.add(l);
                    map.put(l,map.get(tmp)+1);
                }
                if(!map.containsKey(r)) {
                    q.add(r);
                    map.put(r,map.get(tmp)+1);
                }
            }
//            System.out.println(cnt);
        }


    }

    public static List<Integer> left(List<Integer> ls) {
        List<Integer> l = new ArrayList<>();
        for(int i = 0; i < 6; i++) l.add(0);
        l.set(0, ls.get(3));
        l.set(1, ls.get(0));
        l.set(2, ls.get(2));
        l.set(3, ls.get(4));
        l.set(4, ls.get(1));
        l.set(5, ls.get(5));
        return l;
    }

    public static List<Integer> right(List<Integer> ls) {
        List<Integer> l = new ArrayList<>();
        for(int i = 0; i < 6; i++) l.add(0);
        l.set(0, ls.get(0));
        l.set(1, ls.get(4));
        l.set(2, ls.get(1));
        l.set(3, ls.get(3));
        l.set(4, ls.get(5));
        l.set(5, ls.get(2));
        return l;
    }

}