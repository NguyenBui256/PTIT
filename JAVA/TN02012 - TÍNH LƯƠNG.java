import java.time.Duration;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;


class PhongBan {
    String ma, ten;
}

class NhanVien{
    String ma, ten;
    int soNgay, donGia, tong, thuong;
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<NhanVien> ls = new ArrayList<>();
        Map<String, String> mpTenPhong = new HashMap<>();
        int n = sc.nextInt(); sc.nextLine();
        for(int i = 1; i <= n; i++) {
            String[] ins = sc.nextLine().split(" ");
            StringBuilder ten = new StringBuilder();
            for(int j = 1; j < ins.length; j++){
                ten.append(ins[j] + " ");
            }
            mpTenPhong.put(ins[0], ten.toString().trim());
        }
        n = sc.nextInt(); sc.nextLine();
        for(int i = 1; i <= n; i++) {
            NhanVien x = new NhanVien();
            x.ma = sc.nextLine();
            x.ten = sc.nextLine();
            x.donGia = Integer.parseInt(sc.nextLine());
            x.soNgay = Integer.parseInt(sc.nextLine());
            String type = x.ma.substring(0,1);
            int days = Integer.parseInt(x.ma.substring(1,3));
            int rate = 0;
            if(type.equals("A")){

                if(days <= 3) rate = 10;
                else if(days <= 8) rate = 12;
                else if(days <= 15) rate = 14;
                else rate = 20;

            }
            if(type.equals("B")){

                if(days <= 3) rate = 10;
                else if(days <= 8) rate = 11;
                else if(days <= 15) rate = 13;
                else rate = 16;

            }
            if(type.equals("C")){

                if(days <= 3) rate = 9;
                else if(days <= 8) rate = 10;
                else if(days <= 15) rate = 12;
                else rate = 14;

            }
            if(type.equals("D")){

                if(days <= 3) rate = 8;
                else if(days <= 8) rate = 9;
                else if(days <= 15) rate = 11;
                else rate = 13;

            }
            x.tong = x.donGia * x.soNgay * rate * 1000;
//            System.out.println(mpTenPhong.get(x.ma.substring(3,5)));
            System.out.println(x.ma+" "+x.ten+" "+mpTenPhong.get(x.ma.substring(3,5))+" "+x.tong);
        }
    }
}