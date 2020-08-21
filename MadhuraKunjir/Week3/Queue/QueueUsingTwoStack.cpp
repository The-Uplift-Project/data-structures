#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> a;
    stack<int> b;
    int n;
    cin>>n;
    int q,topi;

    int i=0;
    while(i<n){
            cin>>q;
    switch(q){
        case 1:
        int val;
        cin>>val;
        a.push(val);
        break;
        case 2:
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());       //Let the elements be in the smae stack nd do not push again into original one
                a.pop();
            }
        }
        b.pop();
        break;
        case 3:
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
        }        
        cout<<b.top()<<endl;

        break;

    }
    i++;
    }

    return 0;
}
