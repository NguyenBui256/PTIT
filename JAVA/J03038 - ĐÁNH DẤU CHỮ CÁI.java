import java.util.Scanner;

public class Main {

    public static int n;

    static String process(String a){
        String b = "";
        for(int i = 0; i < a.length(); i++){
            if(a.charAt(i) != '-') b += a.charAt(i);
        }
        return b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int[] d = new int[500];
        int ans = 0;
        for(char i : s.toCharArray()){
            if(d[i] == 0) {
                ans++;
                d[i]++;
            }
        }
        System.out.println(ans);
    }

    
}