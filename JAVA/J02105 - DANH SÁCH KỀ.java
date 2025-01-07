import java.util.*;

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
        int t = 1;
        // t = sc.nextInt();
        int x = 1;
        while (t-- > 0){
            // System.out.printf("Test %d:\n", x++);
            int n = sc.nextInt();
            int[][] a = new int[n][n];
            for(int i = 0; i < n; i++){
                System.out.printf("List(%d) = ", i + 1);
                for(int j = 0; j < n; j++){
                    a[i][j] = sc.nextInt();
                    if(a[i][j] == 1){
                        System.out.printf("%d ", j + 1);
                    }
                }
                System.out.println();
            }
        }

    }

    
}