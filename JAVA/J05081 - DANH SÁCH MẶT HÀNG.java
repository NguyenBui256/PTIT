import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;

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
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Vector<Item> v = new Vector<Item>();
        for (int i = 0; i < n; i++) {
            Item x = new Item();
            x.input(sc);
            x.loinhuan = x.ban - x.mua;
            x.id = "MH";
            if(i < 9) x.id += "00";
            else if(i < 99) x.id += "0";
            x.id += Integer.toString(i+1);
            v.add(x);
        }
        Collections.sort(v, new Comparator<Item>() {
            @Override
            public int compare(Item a, Item b) {
                if (a.loinhuan != b.loinhuan){
                    if(a.loinhuan > b.loinhuan) return -1;
                    else return 1;
                } else {
                    if(a.id.compareTo(b.id) < 0) return -1;
                    else return 1;
                }
            }
        });
        for (int i = 0; i < n; i++)
            v.get(i).output();
    }
}