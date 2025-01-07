import java.time.Duration;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;


class City{
    String ma, ten;
    float gia;
}

class Call {
    String number, vung;
    int phut, tien;
}


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); sc.nextLine();
        List<City> cities = new ArrayList<>();
        Map<String,Float> mapGia = new HashMap<>();
        Map<String,String> mapTen = new HashMap<>();
        for(int i = 1; i <= n; i++) {
            City city = new City();
            city.ma = sc.nextLine();
            city.ten = sc.nextLine();
            city.gia = Float.parseFloat(sc.nextLine());
            mapGia.put(city.ma, city.gia);
            mapTen.put(city.ma, city.ten);
            cities.add(city);
        }
        n = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= n; i++) {
            String[] ins = sc.nextLine().trim().split(" ");
            Call x = new Call();
            x.number = ins[0];
            x.phut = xuLy(ins[1], ins[2]);
            if(x.number.charAt(0) == '0') {
                String region = x.number.substring(1,3);
                x.vung = mapTen.get(region);
                x.tien = (int) (x.phut * mapGia.get(region));
            } else {
                x.phut = (int) Math.ceil(1f * xuLy(ins[1], ins[2]) / 3);
                x.vung = "Noi mang";
                x.tien = x.phut * 800;
            }
            System.out.println(x.number + ' ' + x.vung + ' ' + x.phut + ' ' + x.tien);
        }
    }
    static int xuLy(String start, String end) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm");
        LocalTime startT = LocalTime.parse(start, formatter);
        LocalTime endT = LocalTime.parse(end, formatter);
        return (int) Duration.between(startT, endT).toMinutes();
    }
}