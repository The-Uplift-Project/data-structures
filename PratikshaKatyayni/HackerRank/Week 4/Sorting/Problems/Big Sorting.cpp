#include <bits/stdc++.h>

using namespace std;

bool compareNumbers(string str1, string str2) 
{ 
    // Calculate lengths of both string 
    int n1 = str1.length(), n2 = str2.length(); 
  
    if (n1 < n2) 
       return true; 
    if (n2 < n1) 
       return false; 
  
    // If lengths are same 
    for (int i=0; i<n1; i++) 
    { 
       if (str1[i] < str2[i]) 
          return true; 
       if (str1[i] > str2[i]) 
          return false; 
    } 
  
    return false; 
} 
// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {
   sort(unsorted.begin(),unsorted.end(), compareNumbers); 
   return unsorted;
} 

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
