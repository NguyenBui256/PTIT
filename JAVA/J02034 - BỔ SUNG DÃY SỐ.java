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
        int[] d = new int[100005];
        int Max = 0;
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
            d[a[i]]++;
            if(a[i] > Max) Max = a[i];
        }
        if (Max == n) System.out.println("Excellent!");
        else {
            for(int i = 1; i <= Max; i++){
                if(d[i] == 0) {
                    System.out.println(i);
                }
            }
        }

    }

    
}