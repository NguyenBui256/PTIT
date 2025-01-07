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
            double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble(), d = sc.nextDouble();
            System.out.printf("%.4f\n", Math.sqrt((a - c) * (a-c) + (b-d)*(b-d))); 
        }
        sc.close();
    }

    
}