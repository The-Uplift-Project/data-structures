import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.DataInputStream;
import java.util.Arrays;
import java.io.IOException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
 
public class Main {
 
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        FastReader in = new FastReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        SpecialGraphs solver = new SpecialGraphs();
        solver.solve(1, in, out);
        out.close();
    }
 
    static class SpecialGraphs {
 
        private int maxN = 1000001;
        private boolean[] isPrime;
        private int[] countPrime;
 
        public void solve(int testNumber, FastReader in, PrintWriter out) {
            sieveOfEratosthenes();
            countPrime();
 
            int q = in.nextInt();
            while (q-- > 0) {
                int n = in.nextInt();
                out.println(countPrime[n]);
            }
        }
 
        private void countPrime() {
            countPrime = new int[maxN];
            for (int i = 2; i < maxN; i++) {
                countPrime[i] += countPrime[i - 1];
                if (isPrime[i]) {
                    countPrime[i]++;
                }
            }
        }
 
        private void sieveOfEratosthenes() {
            isPrime = new boolean[maxN];
            Arrays.fill(isPrime, 2, maxN, true);
            for (int i = 2; i * i <= maxN; i++) {
                if (isPrime[i]) {
                    for (int j = 2; i * j < maxN; j++) {
                        isPrime[i * j] = false;
                    }
                }
            }
        }
 
    }
 
    static class FastReader {
 
        private final int BUFFER_SIZE = 1 << 16;
        private final InputStream inputStream;
        private final byte[] buffer;
        private int bufferPointer;
        private int bytesRead;
 
        public FastReader() {
            this.inputStream = new DataInputStream(System.in);
            this.buffer = new byte[BUFFER_SIZE];
            this.bufferPointer = bytesRead = 0;
        }
 
        public FastReader(InputStream inputStream) {
            this.inputStream = inputStream;
            this.buffer = new byte[BUFFER_SIZE];
            this.bufferPointer = bytesRead = 0;
        }
 
        public FastReader(String fileName) {
            try {
                this.inputStream = new DataInputStream(new FileInputStream(fileName));
                this.buffer = new byte[BUFFER_SIZE];
                this.bufferPointer = bytesRead = 0;
            } catch (FileNotFoundException e) {
                throw new RuntimeException(e);
            }
        }
 
        public int nextInt() {
            int nextInt = 0;
            byte c = read();
            while (c <= ' ') {
                c = read();
            }
            boolean negative = (c == '-');
            if (negative) {
                c = read();
            }
            do {
                nextInt = nextInt * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (negative) {
                return -nextInt;
            }
            return nextInt;
        }
 
        private void fillBuffer() {
            try {
                bytesRead = inputStream.read(buffer, bufferPointer = 0, BUFFER_SIZE);
                if (bytesRead == -1) {
                    buffer[0] = -1;
                }
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
 
        private byte read() {
            if (bufferPointer == bytesRead) {
                fillBuffer();
            }
            return buffer[bufferPointer++];
        }
 
    }
 
}
 
