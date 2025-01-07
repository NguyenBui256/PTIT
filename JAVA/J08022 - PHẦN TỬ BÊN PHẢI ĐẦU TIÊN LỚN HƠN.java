import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while(n-- > 0) {
            int N = sc.nextInt();
            int[] a = new int[N+1];
            int[] r = new int[N+1];
            for(int i = 1; i <= N; i++) {
                a[i] = sc.nextInt();
            }
            Stack<Integer> st = new Stack<>();
            for(int i = N; i >= 1; i--) {
                while(!st.empty() && a[st.peek()] <= a[i]) {
                    st.pop();
                }
                if(st.empty()) r[i] = -1;
                else r[i] = a[st.peek()];
                st.push(i);
            }
            for(int i = 1; i <= N; i++) {
                System.out.print(r[i] + " ");
            }
            System.out.println();
        }
    }
}