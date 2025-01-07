DoanhNghiep.java
public class DoanhNghiep {
    public String ma, ten;
    public int soSV;

    public DoanhNghiep(){

    }
    public DoanhNghiep(String ma, String ten, int soSV) {
        this.ma = ma;
        this.ten = ten;
        this.soSV = soSV;
    }

    @Override
    public String toString() {
        return String.format("%s %s %d",ma,ten,soSV);
    }
}

Main.java
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DN.in"));
        int n = Integer.parseInt(sc.nextLine());
        List<DoanhNghiep> ls = new ArrayList<>();
        for(int i = 0; i < n; i++) {
            DoanhNghiep x = new DoanhNghiep();
            x.ma = sc.nextLine();
            x.ten = sc.nextLine();
            x.soSV = Integer.parseInt(sc.nextLine());
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<DoanhNghiep>() {
            @Override
            public int compare(DoanhNghiep o1, DoanhNghiep o2) {
                return o1.ma.compareTo(o2.ma);
            }
        });
        for(DoanhNghiep x : ls) {
            System.out.println(x);
        }
    }
}
