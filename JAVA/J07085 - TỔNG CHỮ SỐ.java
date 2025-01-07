import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException, ParseException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
        List<String> ls = (List<String>) ois.readObject();
        for(String x : ls) {
            String ans = "";
            int n = x.length();
            for(int j = 0; j < n; j++) {
                if(Character.isDigit(x.charAt(j))) {
                    if(!(x.charAt(j) == '0') || (x.charAt(j) == '0' && !ans.equals(""))) {
                        ans += x.charAt(j);
                    }
                }
            }
            int sum = 0;
            for(int j = 0; j < ans.length(); j++) {
                sum += ans.charAt(j) - '0';
            }
            System.out.println(ans + " " + sum);
        }
    }
}