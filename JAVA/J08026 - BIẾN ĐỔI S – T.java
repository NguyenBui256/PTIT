import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            Queue<Integer> q = new LinkedList<>();
            q.add(a);
            Map<Integer, Integer> map = new HashMap<>();
            map.put(a,0);
            while(!q.isEmpty()) {
                int num = q.poll();
                if(num == b) {
                    System.out.println(map.get(b));
                    break;
                }
                if(num < b && !map.containsKey(num*2)) {
                    q.add(num*2);
                    map.put(num*2, map.get(num)+1);
                }
                if(num > 0 && !map.containsKey(num-1)) {
                    q.add(num-1);
                    map.put(num-1, map.get(num)+1);
                }
            }
        }
    }

}