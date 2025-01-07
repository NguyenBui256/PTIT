import java.io.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    static class MatHang{
        String ma,ten,loai;
        Double mua,ban,profit;

        MatHang() {

        }

        @Override
        public String toString() {
            return String.format("%s %s %s %.2f", ma,ten,loai,profit);
        }
    }

    public static void main(String[] args) throws IOException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("MATHANG.in"));
        int n = Integer.parseInt(sc.nextLine());
        List<MatHang> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            MatHang x = new MatHang();
            x.ma = String.format("MH%02d", i);
            x.ten = sc.nextLine();
            x.loai = sc.nextLine();
            x.mua = Double.parseDouble(sc.nextLine());
            x.ban = Double.parseDouble(sc.nextLine());
            x.profit = x.ban - x.mua;
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                return Double.compare(o2.profit, o1.profit);
            }
        });
        for(MatHang mh : ls) {
            System.out.println(mh);
        }
    }
}