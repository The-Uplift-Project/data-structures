import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Arrays;
import java.util.List;
import java.util.InputMismatchException;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        MyScan in = new MyScan(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Task solver = new Task();
        solver.solve(1, in, out);
        out.close();
    }
 
    static class Task {
        private HashSet<Integer> vis = new HashSet<>();
 
        public void solve(int testNumber, MyScan in, PrintWriter out) {
            int n = in.nextInt();
 
            int[] start = in.na(n);
            int dest = 0;
            int p = 1;
            for (int l = 0; l < n; l++) {
                dest += (l + 1) * (p);
                p *= 10;
            }
            if (key(start) == dest) {
                out.println(0);
                return;
            }
            vis.add(key(start));
            out.println(solve0(Arrays.asList(start), dest, 0));
        }
 
        private int solve0(List<int[]> start, int dest, int stage) {
            List<int[]> next = new ArrayList<>(1000);
            for (int[] m : start) {
                for (int s = 1; s < m.length; s++) {
                    int[] nn = ml(m, 0, s);
                    int kk = key(nn);
                    if (!vis.contains(kk)) {
                        vis.add(kk);
                        next.add(nn);
                    }
                }
 
            }
            if (vis.contains(dest)) {
                return stage + 1;
            }
            return solve0(next, dest, stage + 1);
        }
 
        private int[] ml(int[] m, int k, int s) {
 
            int[] nn = Arrays.copyOf(m, m.length);
            for (int r = 0; r < s - k + 1; r++) {
                nn[r + k] = m[s - r];
            }
 
 
            return nn;
        }
 
        private int key(int[] data) {
            int m = 0;
            int f = 1;
            for (int s : data) {
                m += (s) * (f);
                f *= 10;
            }
            return m;
        }
 
    }
 
    static class MyScan {
        private final InputStream in;
        private byte[] inbuf = new byte[1024];
        public int lenbuf = 0;
        public int ptrbuf = 0;
 
        public MyScan(InputStream in) {
            this.in = in;
        }
 
        private int readByte() {
            if (lenbuf == -1) throw new InputMismatchException();
            if (ptrbuf >= lenbuf) {
                ptrbuf = 0;
                try {
                    lenbuf = in.read(inbuf);
                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (lenbuf <= 0) return -1;
            }
            return inbuf[ptrbuf++];
        }
 
        public int[] na(int n) {
            int[] k = new int[n];
            for (int i = 0; i < n; i++) {
                k[i] = nextInt();
            }
            return k;
        }
 
        public int nextInt() {
            int num = 0, b;
            boolean minus = false;
            while ((b = readByte()) != -1 && !((b >= '0' && b <= '9') || b == '-')) ;
            if (b == '-') {
                minus = true;
                b = readByte();
            }
 
            while (true) {
                if (b >= '0' && b <= '9') {
                    num = num * 10 + (b - '0');
                } else {
                    return minus ? -num : num;
                }
                b = readByte();
            }
        }
 
    }
}
 
