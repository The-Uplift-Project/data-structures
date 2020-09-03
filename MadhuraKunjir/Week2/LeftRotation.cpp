#include <bits/stdc++.h>

using namespace std;

int main(){

   int n,d;
   cin>>n>>d;
   vector<int> q;
   vector<int>::iterator it;
   for(int i=0;i<n;i++){
       int p;
       cin>>p;
      q.push_back(p);
   }
   it = q.begin();
   int z =0;
   for(int i=0;i<d;i++){
       q.push_back(q[z]);
       q.erase(it);
   }

  for(int i=0;i<n;i++){
      cout<<q[i]<<" ";
  }
    return 0;
}
