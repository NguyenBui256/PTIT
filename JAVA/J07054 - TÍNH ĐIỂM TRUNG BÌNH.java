import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class Hello {
    static class ThiSinh{
        String ma, ten, diemStr;
        Float oop, cpp, thcs, tong;
        int rank;

        @Override
        public String toString() {
            return String.format("%s %s %s %d", ma,ten,diemStr, rank);
        }
    }


    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("BANGDIEM.in"));
        // Scanner sc = new Scanner(System.in);
        List<ThiSinh> ls = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= t; i++) {
            ThiSinh x = new ThiSinh();
            x.ma = String.format("SV%02d",i);
            x.ten = formatTen(sc.nextLine());
            x.oop = Float.parseFloat(sc.nextLine());
            x.cpp = Float.parseFloat(sc.nextLine());
            x.thcs = Float.parseFloat(sc.nextLine());
            x.tong = (x.oop * 3 + x.cpp * 3 + x.thcs * 2) / 8;
            x.diemStr = String.format("%.2f", x.tong);
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                return o2.diemStr.compareTo(o1.diemStr);
            }
        });
        int rank = 1;
        for(int i = 0; i < ls.size(); i++) {
            ls.get(i).rank = rank;
            if(i > 0 && ls.get(i).diemStr.compareTo(ls.get(i-1).diemStr) == 0) {
                ls.get(i).rank = ls.get(i-1).rank;
            } else {
                ls.get(i).rank = i + 1;
            }
        }
        Collections.sort(ls, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                if(o1.rank != o2.rank) {
                    return o1.rank - o2.rank;
                }
                return o1.ma.compareTo(o2.ma);
            }
        });
        for(ThiSinh x : ls) {
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