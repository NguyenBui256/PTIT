import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Hello {
    static class CaThi {
        String ma, id;
        String date, time, dateTime;
        Date thoiGianThi;

        @Override
        public String toString() {
            return String.format("%s %s %s %s",ma, date.toString(), time.toString(), id);
        }
    }


    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("CATHI.in"));
        // Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy HH:mm");

        List<CaThi> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            CaThi x = new CaThi();
            x.ma = String.format("C%03d", i);
            x.date = sc.nextLine();
            x.time = sc.nextLine();
            x.dateTime = x.date + " " + x.time;
            x.thoiGianThi = dateFormat.parse(x.dateTime);
            x.id = sc.nextLine();
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<CaThi>() {
            @Override
            public int compare(CaThi o1, CaThi o2) {
                if(o1.thoiGianThi.compareTo(o2.thoiGianThi) == 0) {
                    return o1.ma.compareTo(o2.ma);
                }
                return o1.thoiGianThi.compareTo(o2.thoiGianThi);
            }
        });
        for(CaThi x : ls) {
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