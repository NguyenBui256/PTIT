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
            int n = sc.nextInt();
            int[] a = new int[n+1];
            Long[] d = new Long[n+1];
            for( int i = 0; i < n; i++){
                a[i] = sc.nextInt();
                if (i == 0) d[i] = 1L*a[i];
                else d[i] = d[i-1] + a[i];
            }
            int ans = -1;
            for ( int i = 1; i < n - 1; i++){
                if (d[i] == d[n-1] - d[i-1]){
                    ans = i + 1;
                    break;
                }
            }
            System.out.println(ans);
        }
    }

    
}