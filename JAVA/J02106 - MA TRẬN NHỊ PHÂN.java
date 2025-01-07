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
            int n = sc.nextInt();
            int[][] a = new int[n][3];
            int cnt = 0;
            for(int i = 0; i < n; i++){
                int tmp = 0;
                for(int j = 0; j < 3; j++){
                    a[i][j] = sc.nextInt();
                    if(a[i][j] == 1) tmp++;
                }
                if (tmp > 1) cnt++;
            }
            System.out.println(cnt);
        }

    }

    
}