import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Hello {
    static class Ten {
        String tenDayDu, ho, dem, ten;

        @Override
        public String toString() {
            return String.format("%s %s %s", ho,dem, ten);
        }
    }



    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        // Scanner sc = new Scanner(System.in);
        List<Ten> ls = new ArrayList<>();
        while(sc.hasNextLine()) {
            Ten x = new Ten();
            x.tenDayDu = formatTen(sc.nextLine());
            String[] tmp = x.tenDayDu.trim().split(" ");
            x.ho = tmp[0];
            x.ten = tmp[tmp.length - 1];
            x.dem = "";
            for(int i = 1; i < tmp.length - 1; i++) {
                x.dem += tmp[i];
                if (i != tmp.length - 2) {
                    x.dem += " ";
                }
            }
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<Ten>() {
            @Override
            public int compare(Ten o1, Ten o2) {
                if(!o1.ten.equals(o2.ten)) return o1.ten.compareTo(o2.ten);
                else if(!o1.ho.equals(o2.ho)) return o1.ho.compareTo(o2.ho);
                return o1.dem.compareTo(o2.dem);
            }
        });
        for(Ten x : ls) {
            System.out.println(x);
        }
    }

    public static String formatTen(String ten) {
        String[] s = ten.trim().split("\\s+");
        String ans = "";
        for(String x : s) {
            if(!x.equals(" ")){
                x = x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase();
                ans += x + " ";
            }
        }
//        System.out.println(ans);
        return ans.trim();
    };

    public static double diemuutien(String ma) {
        if(ma.charAt(2) == '1') return 0.5;
        else if(ma.charAt(2) == '2') return 1.0;
        return 2.5;
    }
}