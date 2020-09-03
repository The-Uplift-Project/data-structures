#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
     
    vector<long> ans(n+1,0);
    vector<long> ans2;
    int a,b;
    long val;
    long pre = 0;
    long pretopre = 0;
    for(int i=0;i<queries.size();i++){
        a = queries[i][0];
        b = queries[i][1];
        val = queries[i][2];

        ans[a] = ans[a] + val;
        if(b+1 <= n){                       // this condition is for checking for overflow coz in array fo 5 ele
            ans[b+1] = ans[b+1] - val;      // if b = 5 then overflow occurs
        }
    }    

    for(int i=1;i<=n;i++){
        pre = pre + ans[i];                      //using prefix sum algorithm to find the final array
        ans2.push_back(pre);
        if(pretopre <= pre){
            pretopre = pre;                     // checking for the maximun number in the array
        }
    }
   
    return pretopre;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
