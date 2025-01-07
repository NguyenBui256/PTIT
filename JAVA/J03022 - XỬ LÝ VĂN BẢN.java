import java.math.BigInteger;
import java.time.Duration;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        List<String> ls = new ArrayList<>();
        while(sc.hasNext()){
            s = sc.next().trim();
            String end = s.substring(s.length()-1);
            if(end.equals(".") || end.equals("?") || end.equals("!")) {
                s = s.substring(0, s.length()-1);
                ls.add(s);
                for(int i = 0; i < ls.size(); i++) {
                    if(i == 0) {
                        System.out.print(ls.get(i).substring(0,1).toUpperCase() + ls.get(i).substring(1).toLowerCase() + " ");
                    } else {
                        System.out.print(ls.get(i).toLowerCase() + " ");
                    }
                }
                ls.clear();
                System.out.println();
            } else ls.add(s);
        }
    }
}