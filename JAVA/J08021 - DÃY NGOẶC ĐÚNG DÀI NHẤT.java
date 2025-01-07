import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while(n-- > 0) {
            String s = sc.nextLine();
            System.out.println(check(s));
        }
    }

    public static int check(String s){
        Stack<Integer> stack = new Stack<>();
        int ans = 0;
        stack.push(-1);
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '(')
                stack.push(i);
            else{
                stack.pop();
                if(!stack.isEmpty()){
                    ans = Math.max(ans, i - stack.peek());
                }
                if(stack.isEmpty())stack.push(i);
            }
        }
        return ans;
    }
}