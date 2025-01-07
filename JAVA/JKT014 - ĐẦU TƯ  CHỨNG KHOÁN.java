import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n+1];
            for(int i = 1; i <= n; i++) {
                a[i] = sc.nextInt();
            }
            a[0] = 1000000000;
            Stack<Integer> stack = new Stack<>();
            stack.push(0);
            for(int i = 1; i <= n; i++) {
                while(!stack.isEmpty() && a[stack.peek()] <= a[i]) {
                    stack.pop();
                }
                System.out.print(i - stack.peek() + " ");
                stack.push(i);
            }
            System.out.println();
        }
        sc.close();
    }
}