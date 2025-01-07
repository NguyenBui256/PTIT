import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Hello {

    static class Ten{
        String[] names;

        @Override
        public String toString() {
            String ans = "";
            for(String x : names) {
                ans += x + " ";
            }
            return ans.trim();
        }
    }

    public static void main(String[] args) throws IOException, ParseException, ClassNotFoundException {
       Scanner sc = new Scanner(new File("DANHSACH.in"));
        // Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<Ten> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            Ten x = new Ten();
            x.names = sc.nextLine().split(" ");
            ls.add(x);
        }
        int q = Integer.parseInt(sc.nextLine());
        while(q-->0) {
            String[] query = sc.nextLine().split("\\.");
            List<Ten> ans = new ArrayList<>();
            for(Ten x : ls) {
                if(x.names.length == query.length) {
                    int ok = 1;
                    for(int j = 0; j < query.length; j++) {
                        if(query[j].equals("*")) continue;
                        if(x.names[j].charAt(0) != query[j].charAt(0)){
                            ok = 0;
                            break;
                        }
                    }
                    if(ok == 1) {
                        ans.add(x);
                    }
                }
            }
            if(ans.size() > 0) {
                Collections.sort(ans, new Comparator<Ten>() {
                    @Override
                    public int compare(Ten o1, Ten o2) {
                        if (o1.names[o1.names.length - 1].compareTo(o2.names[o2.names.length - 1]) != 0)
                            return o1.names[o1.names.length - 1].compareTo(o2.names[o2.names.length - 1]);
                        return o1.names[0].compareTo(o2.names[0]);
                    }
                });
                for(Ten x : ans) {
                    System.out.println(x);
                }
            }
        }

    }
}