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
        while(true){
            StringBuilder sb = new StringBuilder(s);
            int n = sb.length();
            int l = 0;
            int ok = 0;
            while(l < n - 1){
                // System.out.printf("%d\n", l);
                if(sb.charAt(l) == sb.charAt(l+1)){
                    sb.setCharAt(l, '-');
                    sb.setCharAt(l+1, '-');
                    ok = 1;
                    l += 2;
                }
                else{
                    l++;
                }
            }
            String tmp = sb.toString();
            // for(int i = 0; i < a.length; i++) System.out.printf("%d ", a[i]);
            s = process(tmp);
            // System.out.println();
            // for(int i = 0; i < ans; i++) System.out.printf("%d ", a[i]);
            // System.out.println(process(s));
            if(ok == 0) break;
        }
        if(s != "") System.out.println(s);
        else System.out.println("Empty String");
    }

    
}