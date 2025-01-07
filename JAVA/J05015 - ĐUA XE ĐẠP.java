import java.io.*;
import java.util.*;

class Racer{
    String ma, ten, add,time;
    double speed;

}
public class Main {

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<Racer> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            Racer x = new Racer();
            x.ten = sc.nextLine();
            x.add = sc.nextLine();
            x.ma = process(x.ten, x.add);
            x.time = sc.nextLine();
            x.speed = getSpeed(x.time);
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<Racer>() {
            @Override
            public int compare(Racer o1, Racer o2) {
                if(o2.speed != o1.speed) {
                    return Double.compare(o2.speed, o1.speed);
                }
                return o1.ma.compareTo(o2.ma);
            }
        });
        for(Racer x : ls) {
            System.out.printf("%s %s %s %d Km/h\n", x.ma, x.ten, x.add, Math.round(x.speed));
        }
    }

    public static double getSpeed(String time) {
        double h = Double.parseDouble(time.substring(0, 1)) - 6;
        double s = Double.parseDouble(time.substring(2, 4)) / 60;
        return (double) 120 / (h + s);
    }

    public static String process(String ten, String dchi){
        String[] adds = dchi.split(" ");
        String[] names = ten.split(" ");
        StringBuilder ans = new StringBuilder();
        for(String x : adds) {
            ans.append(x.substring(0,1));
        }
        for(String x : names) {
            ans.append(x.substring(0,1));
        }
        return ans.toString();
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