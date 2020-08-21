import java.io.*;
import java.util.*;
 

class Main{
    class pair{
        int F,S;
        pair(int a,int b){F=a;S=b;}
    }
    int n,s;
    boolean visit[];
    boolean isr[];
    int dist[];
    ArrayList<Integer> al;
    int c1,c2;
    pair dfs(int u){
        visit[u]=true;
        pair r=new pair(u,1);
        for(int v:ja[u]){
            if(visit[v])continue;
            pair r1=dfs(v);
            if(r1.S>=r.S){
                r.F=r1.F;r.S=r1.S+1;
            }
        }return r;
    }
    boolean dfs(int u,int find){
        if(u==find){al.add(find);return true;}
        visit[u]=true;
        for(int v:ja[u]){
            if(visit[v])continue;
            if(dfs(v,find)){
                al.add(u);
                return true;
            }
        }return false;
    }
    void find(int u){
        visit[u]=true;
        isr[u]=true;
        for(int v:ja[u]){
            if(visit[v])continue;
            isr[u]=false;
            if(!chk(u,v))dist[v]=dist[u]+1;
            find(v);
        }
    }
    boolean chk(int n1,int n2){
        if((n1==c1&&n2==c2)||(n1==c2&&n2==c1))return true;
        return false;
    }
    void solve(){
     int t=nextInt();
     o:while(t-->0){
        n=nextInt();s=nextInt();
        make(n,n-1);
        if(n==1){
            pw.println(0);continue;
        }
        if(n==2){
            pw.println(s);continue;
        }
        visit=new boolean[n+1];
        al=new ArrayList<>();
        pair node1=dfs(1);
        Arrays.fill(visit,false);
        pair node2=dfs(node1.F);
        Arrays.fill(visit,false);
        dfs(node1.F,node2.F);
        int size=al.size();
        if(size!=node2.S){
            System.out.println("Wrong");
        }
        c1=c2=al.get(size/2);
        // System.out.println(c1+" "+c2+" "+al);
        if(node2.S%2==0){
            c2=al.get(size/2-1);
        }
        isr=new boolean[n+1];
        dist=new int[n+1];
        Arrays.fill(visit,false);
        find(c1);
        int d=-1;
        for(int i=1;i<=n;i++){
            // System.out.println(isr[i]+" "+dist[i]+" "+i);
            if(isr[i]){
                if(d==-1){
                    d=dist[i];
                }else{
                    if(d!=dist[i]){
                        pw.println(0);
                        continue o;
                    }
                }
            }
        }
        n--;
        int ans=s%n==0?s/n:s/n+1;
        pw.println(ans);
     }
    }
    int ja[][],c[],from[],to[];
    void make(int n,int m){
        ja=new int[n+1][];c=new int[n+1];
        from=new int[m];to=new int[m];
        for(int i=0;i<m;i++){
            int u=nextInt(),v=nextInt();
            from[i]=u;to[i]=v;
            c[u]++;c[v]++;
        }
        for(int i=0;i<=n;i++){ja[i]=new int[c[i]];c[i]=0;}
        for(int i=0;i<m;i++){
            ja[from[i]][c[from[i]]++]=to[i];
            ja[to[i]][c[to[i]]++]=from[i];
        }
    }
    BufferedReader br;
    StringTokenizer st;
    PrintWriter pw;
    Main(){
        br=new BufferedReader(new InputStreamReader(System.in));
        pw=new PrintWriter(System.out);
        solve();
        pw.flush();pw.close();
    }
    public String next(){
        while(st==null||!st.hasMoreTokens()){
            String s=null;
            try{
                s=br.readLine();
            }catch(Exception e){
                System.out.println(e);
            }
            st=new StringTokenizer(s);
        }
        return st.nextToken();
    }
    public int nextInt(){
        return Integer.parseInt(next());
    }
    public static void main(String args[] ) throws Exception {
        new Main();
    }
}
