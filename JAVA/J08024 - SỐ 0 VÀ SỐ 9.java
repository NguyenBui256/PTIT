import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while(n-- > 0) {
            int N = sc.nextInt();
            Queue<String> q = new ArrayDeque<>();
            q.add("9");
            while(Integer.parseInt(q.peek()) % N != 0) {
                String res = q.poll();
                q.add(res+"0");
                q.add(res+"9");
            }
            System.out.println(q.peek());
        }
    }
}