import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;

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
        Scanner sc = new Scanner(new File("DATA.in"));
        String s = sc.nextLine();
        BigInteger n, m;
        while(s.length() > 1){
            n = new BigInteger(s.substring(0, s.length()/2));
            m = new BigInteger(s.substring(s.length()/2));   
            n = n.add(m);
            s = n.toString();
            System.out.println(s);
        }

    }
}