import java.io.*;
import java.util.*;
import java.math.*;
import java.lang.*;
 
import static java.lang.Math.*;
 
public class SocialNetwork implements Runnable 
{
    static class InputReader 
    {
        private InputStream stream;
        private byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;
        private SpaceCharFilter filter;
        private BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
 
        public InputReader(InputStream stream) 
        {
            this.stream = stream;
        }
        
        public int read()
        {
            if (numChars==-1) 
                throw new InputMismatchException();
            
            if (curChar >= numChars) 
            {
                curChar = 0;
                try
                {
                    numChars = stream.read(buf);
                }
                catch (IOException e)
                {
                    throw new InputMismatchException();
                }
                
                if(numChars <= 0)               
                    return -1;
            }
            return buf[curChar++];
        }
     
        public String nextLine()
        {
            String str = "";
            try
            {
                str = br.readLine();
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
            return str;
        }
        public int nextInt() 
        {
            int c = read();
            
            while(isSpaceChar(c)) 
                c = read();
            
            int sgn = 1;
        
            if (c == '-') 
            {
                sgn = -1;
                c = read();
            }
            
            int res = 0;
            do
            {
                if(c<'0'||c>'9') 
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            }
            while (!isSpaceChar(c)); 
        
            return res * sgn;
        }
		
        public long nextLong() 
        {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            int sgn = 1;
            if (c == '-')
            {
                sgn = -1;
                c = read();
            }
            long res = 0;
            
            do 
            {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            }
            while (!isSpaceChar(c));
                return res * sgn;
        }
		
        public double nextDouble() 
        {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            int sgn = 1;
            if (c == '-')
            {
                sgn = -1;
                c = read();
            }
            double res = 0;
            while (!isSpaceChar(c) && c != '.') {
                if (c == 'e' || c == 'E')
                    return res * Math.pow(10, nextInt());
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = read();
            }
            if (c == '.') 
            {
                c = read();
                double m = 1;
                while (!isSpaceChar(c))
                {
                    if (c == 'e' || c == 'E')
                        return res * Math.pow(10, nextInt());
                    if (c < '0' || c > '9')
                        throw new InputMismatchException();
                    m /= 10;
                    res += (c - '0') * m;
                    c = read();
                }
            }
            return res * sgn;
        }
    
        public String readString() 
        {
            int c = read();
            while (isSpaceChar(c))
                c = read();
            StringBuilder res = new StringBuilder();
            do 
            {
                res.appendCodePoint(c);
                c = read();
            } 
            while (!isSpaceChar(c));
            
            return res.toString();
        }
     
        public boolean isSpaceChar(int c) 
        {
            if (filter != null)
                return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
     
        public String next()
        {
            return readString();
        }
        
        public interface SpaceCharFilter
        {
            public boolean isSpaceChar(int ch);
        }
		
    }
	
	static ArrayList<Integer> al[];
	static int bfs(int src, int dist,int n)
	{
		boolean visited[]= new boolean[n];
		int ans=0;
		LinkedList<Pair> queue= new LinkedList<>();
		queue.add(new Pair(src,0));
		visited[src]=true;
		while(!queue.isEmpty())
		{
			Pair p =queue.pollFirst();
			int s=p.node;
			int d=p.dist;
	
			if(d==dist)
			{
				ans++;
			}
			else
			{
				for(int child:al[s])
				{
					if(!visited[child])
					{
						visited[child]=true;
						queue.add(new Pair(child,d+1));
					}
				}
			}
		}
		
		return ans;
	}
	
    public static void main(String args[]) throws Exception 
    {
        new Thread(null, new SocialNetwork(),"SocialNetwork",1<<27).start();
    }
	// just change the name of class from Main to reuquired
    public void run()
    {
        InputReader sc = new InputReader(System.in);
        PrintWriter w = new PrintWriter(System.out);
		
		int n=sc.nextInt();
		int e=sc.nextInt();
		al= new ArrayList[n];
		for(int i=0;i<n;++i) al[i]=new ArrayList<Integer>();
		
		for(int i=0;i<e;++i)
		{
			int u=sc.nextInt();
			int v=sc.nextInt();
			al[u].add(v);
			al[v].add(u);
		}
		
		int q=sc.nextInt();
		while(q-->0)
		{
			int src=sc.nextInt();
			int dist=sc.nextInt();
			w.println(bfs(src,dist,n));
		}
		
        System.out.flush();
        w.close();
    }
}
 
class Pair
{
	int node,dist;
	Pair(int n,int d)
	{
		node=n;
		dist=d;
	}
}
