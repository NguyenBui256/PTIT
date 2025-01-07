import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t; t = sc.nextInt();
        int x = 1;
        while (t-- > 0) {
            System.out.printf("Test %d:\n", x++);
            int n; n = sc.nextInt();
            int[] a = new int[n+1];
            int[] d = new int[100005];
            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
                d[a[i]]++;
            }
            for(int i = 0; i < n; i++){
                if(d[a[i]] > 0){
                    System.out.printf("%d xuat hien %d lan\n", a[i], d[a[i]]);
                    d[a[i]] = 0;
                }
            }
        }
    }
}