#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N; cin>>N;
    int a[N];
    for(int i=0;i<N;i++) cin>>a[i];
    int biggest = 0;
    for(int i=0;i<N;i++) biggest = max(biggest, a[i]);
    int count = 0;
    for(int i=0;i<N;i++) if (a[i] == biggest) count++;
        cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
