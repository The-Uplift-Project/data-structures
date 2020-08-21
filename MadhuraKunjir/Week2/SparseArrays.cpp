#include <bits/stdc++.h>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    string s1;
        int m=0,z=0;
        int p=queries.size();
        vector<int> a;
        for(int i=0;i<queries.size();i++)
        {
           s1=queries[i];
           m=0;
           for(int j=0;j<strings.size();j++)
           {
               if(strings[j]==s1)
                 m++;
           }
            a.push_back(m);
            
        }
         return a;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
