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
        int x = 1;
        while (t-- > 0){
            System.out.printf("Test %d:\n", x++);
            int n, m; n = sc.nextInt(); m = sc.nextInt();
            int[][] a = new int[n][m];
            int[][] b = new int[m][n];
            int[][] c = new int[n][n];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    a[i][j] = sc.nextInt();
                    b[j][i] = a[i][j];
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    c[i][j] = 0;
                    for(int k = 0; k < m; k++){
                        c[i][j] += a[i][k] * b[k][j];
                    }
                    System.out.printf("%d ", c[i][j]);
                }
                System.out.println();
            }
        }

    }

    
}