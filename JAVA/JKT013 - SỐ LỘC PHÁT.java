import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            Queue<String> q = new LinkedList<>();
            Stack<String> res = new Stack();
            q.add("6");
            q.add("8");
            int count = 0;
            while(true){
                String x = q.poll();
                if(x.length() > n) {
                    break;
                }
                count += 1;
                res.push(x);
                q.add(x + "6");
                q.add(x + "8");
            }
            System.out.println(count);
            while(!res.empty()){
                System.out.print(res.pop() + " ");
            }
            System.out.println();
        }
    }
}