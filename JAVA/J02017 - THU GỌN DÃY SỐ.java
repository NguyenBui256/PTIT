import java.util.Scanner;

public class Main {

    public static int n;

    static int[] process(int[] a){
        int[] b = new int[n];
        int x = 0;
        for(int i = 0; i < a.length; i++){
            if(a[i] != -1) b[x++] = a[i];
        }
        return b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[] a = new int[n];
        int idx = 0;
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        int ans = n;
        while(true){
            int l = 0;
            int ok = 0;
            int m = ans;
            while(l < m - 1){
                // System.out.printf("%d\n", l);
                if((a[l] + a[l+1]) % 2 == 0){
                    a[l] = -1; a[l+1] = -1;
                    ok = 1;
                    l += 2;
                    ans -= 2;
                }
                else{
                    l++;
                }
            }
            // for(int i = 0; i < a.length; i++) System.out.printf("%d ", a[i]);
            a = process(a);
            // System.out.println();
            // for(int i = 0; i < ans; i++) System.out.printf("%d ", a[i]);
            if(ok == 0) break;
        }
        System.out.println(ans);
    }

    
}