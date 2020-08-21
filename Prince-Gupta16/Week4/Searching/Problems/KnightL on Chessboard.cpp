#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int op[n - 1][n - 1];
    bool isProcessed[n][n];          // to check if all the dequed block is processed or not
    for (int k = 1; k <= n - 1; k++) // for a
    {
        for (int l = k; l <= n - 1; l++) // for b
        {
            int a[n][n];
            for (int i = 0; i < n; i++) // initialization
                for (int j = 0; j < n; j++)
                    a[i][j] = 0;
            int count[n][n];
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    count[i][j] = 0;
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    isProcessed[i][j] = false;
            queue<pair<int, int>> qu; // pushing the last block
            qu.push(make_pair(n - 1, n - 1));
            isProcessed[n - 1][n - 1] = true;
            int x, y, _count;

            // running the loop till the queue is empty or the loop break inside

            while (qu.size() != 0)
            {
                x = qu.front().first;
                y = qu.front().second;
                a[x][y] = 1;
                _count = count[x][y];
                qu.pop();
                int p, q;

                // pushing all the eight approachable block

                p = x + k;
                q = y + l;
                if (p >= 0 && q >= 0 && p < n && q < n) // checking if it is valid block
                {
                    if (a[p][q] != 0) // is pushed already or not
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }

                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }
                p = x + k;
                q = y - l;
                if (p >= 0 && q >= 0 && p < n && q < n)
                {
                    if (a[p][q] != 0)
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }

                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }
                p = x - k;
                q = y + l;
                if (p >= 0 && q >= 0 && p < n && q < n)
                {
                    if (a[p][q] != 0)
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }
                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }
                p = x - k;
                q = y - l;
                if (p >= 0 && q >= 0 && p < n && q < n)
                {
                    if (a[p][q] != 0)
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }
                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }
                p = x + l;
                q = y + k;
                if (p >= 0 && q >= 0 && p < n && q < n)
                {
                    if (a[p][q] != 0)
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }
                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }
                p = x + l;
                q = y - k;
                if (p >= 0 && q >= 0 && p < n && q < n)
                {
                    if (a[p][q] != 0)
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }
                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }
                p = x - l;
                q = y + k;
                if (p >= 0 && q >= 0 && p < n && q < n)
                {
                    if (a[p][q] != 0)
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }
                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }
                p = x - l;
                q = y - k;
                if (p >= 0 && q >= 0 && p < n && q < n)
                {
                    if (a[p][q] != 0)
                        count[p][q] = min(count[p][q], _count + 1);
                    else
                    {
                        count[p][q] = _count + 1;
                        if (p == 0 && q == 0)
                        {
                            a[0][0] = 1;
                            break;
                        }
                        count[p][q] = min(count[p][q], _count + 1);
                        if (isProcessed[p][q] == false)
                        {
                            qu.push(make_pair(p, q));
                            isProcessed[p][q] = true;
                        }
                    }
                }

                int ans = -1;
                if (a[0][0] == 1)
                    ans = count[x][y] + 1; //if (0,0) is approached set the ans otherwise it will be -1
                op[k - 1][l - 1] = ans;
                op[l - 1][k - 1] = ans;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
                cout << op[i][j] << " ";
            cout << endl;
        }
    }