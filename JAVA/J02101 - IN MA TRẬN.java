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
        int t;
        t = sc.nextInt();
        while (t-- > 0){
            int n; n = sc.nextInt();
            int[][] a = new int[n][n];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++) a[i][j] = sc.nextInt();
            }
            int x = 0;
            for(int i = 0; i < n; i++){
                if (x % 2 == 0)
                    for(int j = 0; j < n; j++) System.out.printf("%d ", a[i][j]);
                else 
                    for(int j = n - 1; j >= 0; j--) System.out.printf("%d ", a[i][j]);
                x++;
                // System.out.println();
            }   
            System.out.println();
        }

    }

    
}