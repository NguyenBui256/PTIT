import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while(n-- > 0) {
            String s = sc.nextLine();
            if(check(s)) {
                System.out.println("YES");
            } else System.out.println("NO");
        }
    }

    static boolean check(String s) {
        int n = s.length();
        Stack<Character> st = new Stack<>();
        for(int i = 0; i < n; i++) {
            if(s.charAt(i) == ')'){
                if(st.empty() || st.peek() != '(')
                    return false;
                st.pop();
            } else if(s.charAt(i) == ']') {
                if(st.empty() || st.peek() != '[')
                    return false;
                st.pop();
            } else if(s.charAt(i) == '}') {
                if(st.empty() || st.peek() != '{')
                    return false;
                st.pop();
            } else st.push(s.charAt(i));
        }
        return st.empty();
    }
}