import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0) {
            double x1 = sc.nextDouble(),y1=sc.nextDouble(),x2=sc.nextDouble(),
            y2=sc.nextDouble(),x3=sc.nextDouble(),y3=sc.nextDouble();
            double a1 = Math.sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
            double a2 = Math.sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
            double a3 = Math.sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
            if(a1 + a2 <= a3 || a1 + a3 <= a2 || a2 + a3 <= a1){
                System.out.println("INVALID");
                continue;
            }
            System.out.printf("%.3f\n", a1+a2+a3);
        }
        sc.close();
    }

    
}