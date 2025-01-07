import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-- > 0) {
            int N = sc.nextInt();
            long K = sc.nextLong();
            long[] a = new long[N+1];
            Map<Long, Integer> m = new HashMap<>();
            for(int i = 0; i < N; i++) {
                a[i] = sc.nextLong();
                if (m.getOrDefault(a[i],0) == 0) {
                    m.put(a[i],1);
                } else {
                    m.put(a[i],m.get(a[i])+1);
                }
            }
            long ans = 0L;
            List<Long> l = new ArrayList<>();
            for(Long i : a) {
                Long x = K - i;
                if(m.containsKey(x)) {
                    if (i == x) {
                        ans += m.get(x) - 1;
                    } else {
                        ans += m.get(x);
                    }
                }
            }
            System.out.println(ans/2);
        }
    }
}