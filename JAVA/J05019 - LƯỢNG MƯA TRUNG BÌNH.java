import java.time.Duration;
import java.time.LocalDate;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.*;


class Station {
    String ma, ten;
    double rate;
}
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<String,Float> rain = new HashMap<>();
        Map<String,Float> time = new HashMap<>();
        int n = sc.nextInt(); sc.nextLine();
        List<Station> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            Station x = new Station();
            x.ma = String.format("T%02d", i);
            x.ten = sc.nextLine().trim();
            if(rain.getOrDefault(x.ten,0f) == 0) ls.add(x);
            String start = sc.nextLine().trim();
            String end = sc.nextLine().trim();
            time.put(x.ten, time.getOrDefault(x.ten, 0f) + timeCalc(start, end));
            float rainVolume = Float.parseFloat(sc.nextLine());
            rain.put(x.ten, rain.getOrDefault(x.ten, 0f) + rainVolume);
        }
        for(Station x : ls) {
            x.rate = rain.get(x.ten) / time.get(x.ten);
            System.out.println(x.ma + " " + x.ten + " " + String.format("%.2f", x.rate));
        }
    }

    public static float timeCalc(String start, String end) {
        // Sử dụng định dạng đúng cho giờ 24
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm");
        // Chuyển đổi chuỗi thời gian thành LocalTime thay vì LocalDate
        LocalTime startTime = LocalTime.parse(start, formatter);
        LocalTime endTime = LocalTime.parse(end, formatter);
//        System.out.println(start + " " + end + " " + (float) Duration.between(startTime, endTime).toMinutes() / 60);
        // Tính toán sự chênh lệch giữa hai thời gian
        return (float) Duration.between(startTime, endTime).toMinutes() / 60;
    }
}