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
        int[] d = new int[1005];
        while(sc.hasNext())
        {
            d[sc.nextInt()]++;
        }
        for(int i = 0; i < 1001; i++){
            if(d[i] > 0){
                System.out.printf("%d %d\n", i, d[i]);
            }
        }

    }
}