import java.util.Scanner;

public class Main {

    static Long gcd(Long a, Long b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Long t; t = sc.nextLong();
        while (t-- > 0) {
            Long n; n = sc.nextLong();
            Long ans = 1L;
            for(Long i = 1L; i <= n; i++){
                ans = ans * i / gcd(ans,i);
            }
            System.out.println(ans);
        }
    }

    
}