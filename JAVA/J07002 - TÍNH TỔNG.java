import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;
import java.io.File;
import java.io.FileNotFoundException;

class Item {
    String id, ten, donvi;
    int mua,ban, loinhuan;

    void input(Scanner sc) {
        sc.nextLine();
        this.ten = sc.nextLine();
        this.donvi = sc.nextLine();
        this.mua = sc.nextInt();
        this.ban = sc.nextInt();
    }

    void output() {
        System.out.printf("%s %s %s %d %d %d\n", id, ten, donvi, mua, ban, loinhuan);
    }
}

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DATA.in"));
        Long ans = 0L;
        while(scanner.hasNextLine()){
            String[] s = scanner.nextLine().split(" ");
            for(String i : s){
                int n = i.length(), check = 1, j = 0;
                while(j < n){
                    String tmp = "";
                    if(Character.isDigit(i.charAt(j))) {
                        while(j < n && Character.isDigit(i.charAt(j))){
                            tmp += i.charAt(j);
                            j++;
                        }
                        if(tmp.length() <= 11 && Integer.valueOf(tmp) <= Integer.MAX_VALUE) {
                            ans += Integer.valueOf(tmp);
                        }
                    } else j++;
                }
            }
        }
        System.out.println(ans);
    }
}