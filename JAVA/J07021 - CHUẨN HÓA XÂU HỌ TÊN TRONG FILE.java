import java.io.*;
import java.time.temporal.ChronoField;
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

    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DATA.in"));
        // int t = 1;
        // t = sc.nextInt();
        // sc.nextLine();
        while (sc.hasNextLine()){
            String s = sc.nextLine();
            if (s.compareTo("END") == 0) return;
            Vector<String> a = new Vector<String>();
            String x = "";
            s = s.toLowerCase() + " ";
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == ' ') {
                    if (x != "") {
                        a.add(x);
                        x = "";
                    }
                } else {
                    x += s.charAt(i);
                }
            }
            for (int i = 0; i < a.size(); i++) {
                String k = a.get(i);
                System.out.print(k.substring(0, 1).toUpperCase() + k.substring(1) + " ");
            }
            System.out.println();
        }

    }

    
}