import java.time.Duration;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;


class Stock{
    String ma;
    float tax, transport, tong;
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); sc.nextLine();
        List<Stock> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            String[] ins = sc.nextLine().split(" ");
            Stock x = new Stock();
            x.ma = ins[0];
            switch (x.ma.charAt(0)){
                case 'T':
                    x.tax = 0.29f;
                    x.transport = 0.04f;
                    break;
                case 'C':
                    x.tax = 0.1f;
                    x.transport = 0.03f;
                    break;
                case 'D':
                    x.tax = 0.08f;
                    x.transport = 0.025f;
                    break;
                case 'M':
                    x.tax = 0.02f;
                    x.transport = 0.005f;
                    break;
            }
            if(ins[0].charAt(3) == 'C') {
                x.tax *= 0.95f;
            }
            float donGia = Float.parseFloat(ins[1]);
            x.tong = (donGia * (1 + x.tax + x.transport)) * 1.2f;
            System.out.println(x.ma + " " + String.format("%.2f", x.tong));
        }
    }
    static int xuLy(String start, String end) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm");
        LocalTime startT = LocalTime.parse(start, formatter);
        LocalTime endT = LocalTime.parse(end, formatter);
        return (int) Duration.between(startT, endT).toMinutes();
    }
}