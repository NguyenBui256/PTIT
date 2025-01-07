import java.util.*;


class NhanVien{
    String ma, ten, chucVu, bacLuong, soHieu;
}
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); sc.nextLine();
        List<NhanVien> ls = new ArrayList<>();
        Map<String,Integer> mp = new HashMap<>();
        for(int i = 1; i <= n; i++) {
            NhanVien x = new NhanVien();
            String[] parts = sc.nextLine().split(" ");
            x.ma = parts[0];
            x.ten = "";
            for(int j = 1; j < parts.length; j++) {
                x.ten += parts[j] + " ";
            }
            x.ten = x.ten.trim();
            String chucTmp = x.ma.substring(0,2);
            if(chucTmp.equals("GD") && mp.getOrDefault("GD", 0) == 1
            || chucTmp.equals("TP") && mp.getOrDefault("TP", 0) == 3
            || chucTmp.equals("PP") && mp.getOrDefault("PP", 0) == 3) {
                chucTmp = "NV";
            } else {
                mp.put(chucTmp, mp.getOrDefault(chucTmp, 0) + 1);
            }
            x.chucVu = chucTmp;
            x.bacLuong = x.ma.substring(2,4);
            x.soHieu = x.ma.substring(4,7);
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<NhanVien>() {
            @Override
            public int compare(NhanVien o1, NhanVien o2) {
                if(o1.bacLuong.equals(o2.bacLuong)) {
                    return o1.soHieu.compareTo(o2.soHieu);
                }
                return o2.bacLuong.compareTo(o1.bacLuong);
            }
        });
        int m = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= m; i++) {
            String query = sc.nextLine();
            for(NhanVien x : ls) {
                if(x.chucVu.equals(query)) {
                    System.out.println(x.ten + " " + x.chucVu + " " + x.soHieu + " " + x.bacLuong);
                }
            }
            System.out.println();
        }
    }
}