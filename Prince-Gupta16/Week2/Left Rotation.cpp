#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d,ar[100002];
    cin >> n >> d;
    for(int i = 0; i < n; i++)
    cin >> ar[(n-d+i)%n];
    for(int i = 0; i < n; i++)
    cout << ar[i] << " ";
    cout << endl;
    return 0;
}