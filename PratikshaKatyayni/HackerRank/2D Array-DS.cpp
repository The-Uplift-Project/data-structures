#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int sum=0;
    vector<int> v;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int p=i;p<i+3;p++)
            {
                for(int q=j;q<j+3;q++)
                {
                    if(p==i+1 && (q==j||q==j+2))
                        continue;
                    else
                        sum=sum+arr[p][q];
                }
            }
            v.push_back(sum);
            sum=0;
        }
    }
    int maxi=*max_element (v.begin(), v.end());
    return maxi;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
