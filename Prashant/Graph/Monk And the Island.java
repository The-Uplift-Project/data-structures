import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.*;
 
public class MonkNIceland {
 
    static class Graph {
        int V;
        List<Integer>[] adjs;
 
        Graph(int nodes) {
            V = nodes;
            adjs = (List<Integer>[]) new List[nodes + 1];
            for (int v = 0; v <= nodes; v++)
                adjs[v] = new ArrayList<>();
        }
 
        void addEdge(int source, int dest) {
            adjs[source].add(dest);
            adjs[dest].add(source);
        }
 
        Iterable<Integer> ads(int v){
            return adjs[v];
        }
 
        int MinHopPathFor(int N){
            if(N == 1)
                return 0;
 
            Queue<Integer> nodes = new LinkedList<>();
            Queue<Integer> hopsRequired = new LinkedList<>();
            nodes.add(1);
            hopsRequired.add(1);
            boolean[] visited = new boolean[N];
 
            while (!nodes.isEmpty()){
                Integer node = nodes.remove();
                int hops = hopsRequired.remove();
                for (Integer vertex : ads(node)){
                    if (vertex == N)
                        return hops;
                    nodes.add(vertex);
                    hopsRequired.add(hops+1);
                }
            }
 
            return -1;
        }
    }
 
    public static void main(String[] args) {
        InputReader in = new InputReader(System.in);
        PrintWriter out = new PrintWriter(System.out);
 
        int T = in.nextInt();
        for (int i = 0; i < T; i++) {
            int N = in.nextInt();
            int M = in.nextInt();
            Graph graph = new Graph(N);
            for (int j = 0; j < M; j++) {
                graph.addEdge(in.nextInt(), in.nextInt());
            }
            out.println(graph.MinHopPathFor(N));
        }
        out.close();
    }
 
    static class InputReader {
 
        private InputStream stream;
        private byte[] buf = new byte[8192];
        private int curChar, snumChars;
        private SpaceCharFilter filter;
 
        public InputReader(InputStream stream) {
            this.stream = stream;
        }
 
        public int snext() {
            if (snumChars == -1)
                throw new InputMismatchException();
            if (curChar >= snumChars) {
                curChar = 0;
                try {
                    snumChars = stream.read(buf);
                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (snumChars <= 0)
                    return -1;
            }
            return buf[curChar++];
        }
 
        public int nextInt() {
            int c = snext();
            while (isSpaceChar(c))
                c = snext();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = snext();
            }
            int res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = snext();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public long nextLong() {
            int c = snext();
            while (isSpaceChar(c))
                c = snext();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = snext();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = snext();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
 
        public int[] nextIntArray(int n) {
            int a[] = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = nextInt();
            return a;
        }
 
        public String readString() {
            int c = snext();
            while (isSpaceChar(c))
                c = snext();
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = snext();
            } while (!isSpaceChar(c));
            return res.toString();
        }
 
        public boolean isSpaceChar(int c) {
            if (filter != null)
                return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
 
        public interface SpaceCharFilter {
            public boolean isSpaceChar(int ch);
        }
    }
 
 
}
