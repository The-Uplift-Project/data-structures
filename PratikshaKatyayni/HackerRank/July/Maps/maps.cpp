/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    /*map<string,int> mp;
    int q;
    cin>>q;
    while(q--);
    {
        int ch,b;
        string name;
        cin>>ch;
        if(ch==1)
        {
            cin>>name>>b;
            if(mp.find(name)==mp.end())
            mp[name]=b;
            else
            mp[name]+=b;
        }
        else
        if(ch==2)
        {
            cin>>name;
            mp.erase(name);
            //mp[name]=0;
        }
        else
        if(ch==3)
        {
            cin>>name;
            if(mp.find(name)!=mp.end())
            cout<<mp[name]<<endl;
            else
            cout<<0<<endl;
        }
    }  
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;
int main()
{
    map<string,int>m ;
    map<string,int>::iterator itr ;
    int n ,qvalue ,marks ;
    string name ;
    cin>> n ;
   for( int i  = 0 ; i  <n  ; ++i)
   {
    cin>>qvalue;
    if( qvalue == 1)
    {
    cin>>name ;
    cin>>marks ;
    itr =m.find(name) ;
       if(itr == m.end())
         m.insert(make_pair(name,marks));
         else
        (*itr).second = marks + (*itr).second ;
     }


else if(qvalue==2)
{

    cin>>name ;
    m.erase(name);
}
else
{
    cin>>name ;
    itr  = m.find(name) ;
    if(itr == m.end())
        cout<<"0"<<"\n";
    else
        cout<<(*itr).second<<"\n" ;
}

   
}
return  0 ;
}
