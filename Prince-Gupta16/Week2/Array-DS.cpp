#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
        int aux = 0;
        int n = a.size();
        for (int i = 0; i < n/2; ++i) {
                aux = a[n-i-1];
                a[n-i-1] = a[i];
                a[i] = aux;
        }
        return a;

}

int main()
{    return 0;
}

vector<string> split_string(string input_string) {
    return splits;
}
