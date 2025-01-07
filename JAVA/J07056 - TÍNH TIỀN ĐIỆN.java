import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class Hello {
    static class User {
        String ma, ten, type;
        int start, end, usage, limit, inLimit, outLimit, vat, tongTien;

        @Override
        public String toString() {
            return String.format("%s %s %d %d %d %d", ma,ten,inLimit,outLimit,vat,tongTien);
        }
    }


    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        // Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<User> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            User user = new User();
            user.ma = String.format("KH%02d", i);
            user.ten = formatTen(sc.nextLine());
            String[] tmp = sc.nextLine().split(" ");
            user.type = tmp[0];
            user.start = Integer.parseInt(tmp[1]);
            user.end = Integer.parseInt(tmp[2]);
            user.usage = user.end - user.start;
            if(user.type.equals("A")) {
                user.limit = 100;
            } else if (user.type.equals("B")) {
                user.limit = 500;
            } else {
                user.limit = 200;
            }
            user.inLimit = Math.min(user.usage, user.limit) * 450;
            user.outLimit = Math.max(0, user.usage - user.limit) * 1000;
            user.vat = user.outLimit / 100 * 5;
            user.tongTien = user.inLimit + user.outLimit + user.vat;
            ls.add(user);
            // System.out.println(user);
        }
        Collections.sort(ls, new Comparator<User>() {
            @Override
            public int compare(User o1, User o2) {
                return o2.tongTien - o1.tongTien;
            }
        });
        for(User x : ls) {
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