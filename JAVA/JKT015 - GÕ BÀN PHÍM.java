import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int n = s.length();
        Stack<Character> l1 = new Stack<>();
        Stack<Character> l2 = new Stack<>();
        for(int i = 0; i < n; i++) {
            if(s.charAt(i) == '<') {
                if(!l1.empty()) {
                    l2.push(l1.peek());
                    l1.pop();
                }
            } else if(s.charAt(i) == '>') {
                if(!l2.empty()) {
                    l1.push(l2.peek());
                    l2.pop();
                }
            } else if(s.charAt(i) == '-') {
                if(!l1.empty()) {
                    l1.pop();
                }
            } else l1.push(s.charAt(i));
        }
        StringBuilder sb = new StringBuilder();
        while(!l1.empty()) {
            sb.append(l1.peek());
            l1.pop();
        }
        sb.reverse();
        while(!l2.empty()) {
            sb.append(l2.peek());
            l2.pop();
        }
        System.out.println(sb);
        sc.close();

    }
}