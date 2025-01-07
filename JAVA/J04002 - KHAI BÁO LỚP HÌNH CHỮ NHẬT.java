import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        // t = sc.nextInt();
        // sc.nextLine();
        while(t-- > 0) {
            double a = sc.nextDouble(), b = sc.nextDouble();
            String s = sc.next();
            s = s.substring(0,1).toUpperCase() + s.substring(1).toLowerCase();

            int W = (int)a;
            int H = (int)b;
            if (W != a || H != b || W <= 0 || H <= 0){
                System.out.println("INVALID");
                return;
            }
            System.out.printf("%d %d %s", (int)(2*(a+b)), (int)(a*b), s);

        }
        sc.close();
    }

    
}