import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n+1];
            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            Stack<Integer> st = new Stack<>();
            int[] l = new int[n+1];
            int[] r = new int[n+1];
            for(int i = 0; i < n; i++) {
                while(!st.isEmpty() && a[st.peek()] >= a[i]) st.pop();
                if(st.isEmpty()) l[i] = 0;
                else l[i] = st.peek() + 1;
                st.push(i);
            }
            st = new Stack<>();
            for(int i = n - 1; i >= 0; i--) {
                while(!st.isEmpty() && a[st.peek()] >= a[i]) st.pop();
                if(st.isEmpty()) r[i] = n - 1;
                else r[i] = st.peek() - 1;
                st.push(i);
            }
            long ans = 0;
            for(int i = 0; i < n; i++) {
                ans = Math.max(ans, (long) (r[i] - l[i] + 1) * a[i]);
            }
            System.out.println(ans);
        }
    }
}