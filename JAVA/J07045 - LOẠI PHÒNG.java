LoaiPhong.java
import java.util.Comparator;

public class LoaiPhong implements Comparable {
    String kh, ten;
    Double dongia, phucvu;
    LoaiPhong(String s) {
        String[] strings = s.split(" ");
        kh = strings[0];
        ten = strings[1];
        dongia = Double.parseDouble(strings[2]);
        phucvu = Double.parseDouble(strings[3]);
    }

    @Override
    public int compareTo(Object o) {
        return ten.compareTo(((LoaiPhong) o).ten);
    }

    @Override
    public String toString() {
        return String.format("%s %s %.0f %.2f", kh,ten,dongia,phucvu);
    }
}

Main.java
import java.io.*;
import java.util.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {


    public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
    public static void main5632646(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
}

