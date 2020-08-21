#include <bits/stdc++.h>
using namespace std;

string solve(vector<int> a)
{

    int n = a.size();
    int leftsum = 0;
    int flag = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (leftsum == sum)
        {
            flag = 1;
            return "YES";
        }
        leftsum += a[i];
    }
    if (flag == 0)
    {
        return "NO";
    }
    return "NO";
}

int main()
{
    int T;
    cin >> T;
    for (int a0 = 0; a0 < T; a0++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int a_i = 0; a_i < n; a_i++)
        {
            cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}