import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        while(sc.hasNextLine()) {
            s = sc.nextLine().trim();
            String[] ins = s.split("\\s+");
            for(int i = 0; i < ins.length; i++) {
                if(i == 0) {
                    System.out.print(ins[0].substring(0,1).toUpperCase() + ins[0].substring(1).toLowerCase() + " ");
                } else if(i < ins.length  - 1){
                    System.out.print(ins[i].toLowerCase());
                    if(i != ins.length - 2) System.out.print(" ");
                    else if(ins[ins.length-1].equals(".") || ins[ins.length-1].equals("?") || ins[ins.length-1].equals("!")) {
                        System.out.println(ins[ins.length-1]);
                        break;
                    }
                } else {
                    System.out.print(" ");
                    String end = ins[i].substring(ins[i].length()-1);
                    if(end.equals(".") || end.equals("?") || end.equals("!")) {
                        System.out.print(ins[i].toLowerCase());
                    } else {
                        System.out.print(ins[i].toLowerCase() + ".");
                    }
                }
            }
            System.out.println();
        }

    }
}