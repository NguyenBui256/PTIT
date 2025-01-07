import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;

class KH{
    String ma, ten, gender, dob, add;
    Date date;

    @Override
    public String toString() {
        return String.format("%s %s %s %s %s", ma, ten, gender, add, dob);
    }
}

public class Main {

    public static void main(String[] args) throws IOException, ParseException {
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        int n = sc.nextInt();
        ArrayList<KH> ls = new ArrayList<>();
        sc.nextLine();
        for(int i = 1; i <= n; i++) {
            KH x = new KH();
            x.ma = String.format("KH%03d", i);
            x.ten = chTen(sc.nextLine());
            x.gender = sc.nextLine();
            x.dob = chNgay(sc.nextLine());
            SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
            x.date = formatter.parse(x.dob);
            x.add = sc.nextLine();
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<KH>() {
            @Override
            public int compare(KH o1, KH o2) {
                return o1.date.compareTo(o2.date);
            }
        });
        for(KH x : ls) {
            System.out.println(x);
        }
    }

    public static String chTen(String s) {
        s = s.trim().toLowerCase().replaceAll("\\s+", " ");
        for (int i = 0; i < s.length(); i++) {
            if (i == 0 || s.charAt(i - 1) == ' ') {
                s = s.substring(0, i) + Character.toUpperCase(s.charAt(i)) + s.substring(i + 1);
            }
        }
        return s;
    }

    public static String chNgay(String input) {
        String[] ls = input.split("/");
        return String.format("%02d/%02d/%d", Integer.parseInt(ls[0]), Integer.parseInt(ls[1]), Integer.parseInt(ls[2]));
    }
}