import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m;
        n = sc.nextInt(); m = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        int[] c = new int[1005];
        int[] d = new int[1005];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
            c[a[i]]++;
        }
        for(int i = 0; i < m; i++) {
            b[i] = sc.nextInt();
            d[b[i]]++;
        }
        for(int i = 1; i <= 1000; i++){
            if(c[i] > 0 || d[i] > 0) System.out.printf("%d ", i); 
        }
    }
}