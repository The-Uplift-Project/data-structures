/** this program is implementaion of so NP problem from hackerEarth*/

import java.io.BufferedReader;
import java.io.InputStreamReader;
 
//import for Scanner and other utility classes
import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
       
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s[] = br.readLine().split(" ");
        int n=Integer.parseInt(s[0]);
        int m=Integer.parseInt(s[1]);
        int k=Integer.parseInt(s[2]);
        if(n-m>k)
        System.out.println("-1");
        else if(n-m==k)
        {
        if(m-k>k)
        System.out.println("-1");
        else
        System.out.println("0");
        }
        else
        System.out.println(m-n+k);
 
    }
}
