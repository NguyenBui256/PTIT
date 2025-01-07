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
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            // System.out.println(s);
            String[] v = s.split(" ");
            for(String i : v){
                StringBuilder sb = new StringBuilder(i);
                System.out.printf("%s ",sb.reverse().toString());
            }
            System.out.println();
        }
        
    }

    
}