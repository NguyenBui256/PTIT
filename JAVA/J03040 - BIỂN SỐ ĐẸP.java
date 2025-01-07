import java.util.Scanner;

public class Main {

    public static String check(String s) {
        if (s.charAt(1) > s.charAt(0) && s.charAt(2) > s.charAt(1) && s.charAt(3) > s.charAt(2) && s.charAt(4) > s.charAt(3))
            return "YES";
        if (s.charAt(1) == s.charAt(0) && s.charAt(2) == s.charAt(1) && s.charAt(4) == s.charAt(3))
            return "YES";
        for (int i = 0; i < 5; i++) {
            if (s.charAt(i) != '6' && s.charAt(i) != '8')
                return "NO";
        }
        return "YES";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0) {
            String s = sc.nextLine().substring(5).replace(".", "");
            System.out.println(check(s));
        }
        sc.close();
    }

    
}