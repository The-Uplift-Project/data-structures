
/** this program find below's solution'
 * You are given a phone book that consists of people's names and their phone number. 
 * After that you will be given some person's name as query. 
 * For each query, print the phone number of that person.
 */

import java.util.*;
import java.io.*;

class map {
    public static void main(String[] args) {

        HashMap<String, Integer> hash = new HashMap<>();
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        for (int i = 0; i < n; i++) {
            String name = in.nextLine();
            int phone = in.nextInt();
            in.nextLine();
            hash.put(name, phone);
        }
        while (in.hasNext()) {
            String s = in.nextLine();
            try {
                int out = hash.get(s);
                System.out.println(s + "=" + out);
            } catch (Exception e) {
                System.out.println("Not found");
            }
        }

    }
}
