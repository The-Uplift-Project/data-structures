#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<long int> s, m;
    m.push(-1);
    int n; cin>>n;
    int  i = 0;
    while(i<n){
        int x;
        cin>>x;
        if(x==1){
            int z ;cin>>z;
            s.push(z);
            
                if(z >= m.top())
                m.push(z);
            
        }
        else if(x==2){
            int q = s.top();
            if(q == m.top())
                m.pop();
            s.pop();
        }
        else if(x==3){
            cout << m.top() << endl;
            //m.pop();
        }
        i++;
    }
    return 0;
}
