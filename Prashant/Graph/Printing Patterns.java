//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

import java.util.*;
 
class TestClass {
    public static void main(String args[] ) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s[] = br.readLine().split(" ");
        int r = Integer.valueOf(s[0]);
        int c = Integer.valueOf(s[1]);
        int x = Integer.valueOf(s[2]);
        int y = Integer.valueOf(s[3]);
        StringBuilder ans = new StringBuilder();
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                ans.append(Math.max(Math.abs(x-i), Math.abs(y-j))).append(" ");
            }
            ans.append("\n");
        }
        System.out.print(ans);
    }
}
