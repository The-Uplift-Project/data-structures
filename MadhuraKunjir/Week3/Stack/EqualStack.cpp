#include <bits/stdc++.h>
#include<stack>
using namespace std;

vector<string> split_string(string);

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

   /* int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<h1.size();i++)
    sum1=sum1+h1[i];
     for(int i=0;i<h2.size();i++)
    sum2=sum2+h2[i];
     for(int i=0;i<h3.size();i++)
    sum3=sum3+h3[i];
    int sum1t,sum2t,sum3t;
    sum1t=sum1;
    sum2t=sum2;
    sum3t=sum3;
        static int m=0,n=0,p=0;
    while(sum1t!=sum2t && sum1t!= sum3t && sum2t!=sum3t && m<h1.size() && n<h2.size() && p<h3.size())
    { 
        while(sum1t!=sum2t)
       {
           int x1=0;
           if(sum1t>sum2t)
           {
               x1=h1[m];
               m++;
           sum1t=sum1t-x1;}
           else
          {
              x1=h2[n];
              n++;
          sum2t=sum2t-x1;}

       }
       while(sum1t!=sum3t)
       {
           int x1=0;
           if(sum1t>sum3t)
           {x1=h1[m];
           m++;
           sum1t=sum1t-x1;}
           else
          {x1=h3[p];
          p++;
          sum3t=sum3t-x1;}

       }
        while(sum2t!=sum3t)
       {
           int x1=0;
           if(sum2t>sum3t)
           {x1=h2[n];
           n++;
           sum2t=sum2t-x1;}
           else
          {x1=h3[p];
          p++;
          sum3t=sum3t-x1;}

       }
       }
     if(sum1t==sum2t && sum1t==sum3t && sum1t==sum3t)
    return sum1t;
    else
    return 0;
    while(true)
    {
        if(sum1t==sum2t && sum2t==sum3t && sum1t==sum3t)
         break;
        int x1=0;
        if(sum2t>sum1t)
           {x1=h2[n];
           n++;
           sum2t=sum2t-x1;}
           if(sum3t>sum1t)
           {x1=h3[m];
           p++;
           sum3t=sum3t-x1;}
         if(sum1t>sum2t)
           {
               x1=h1[m];
               m++;
           sum1t=sum1t-x1;}
            if(sum3t>sum2t)
          {x1=h3[p];
          p++;
          sum3t=sum3t-x1;}
           if(sum1t>sum3t)
            {
              x1=h1[n];
              m++;
          sum1t=sum1t-x1;}
           
           if(sum2t>sum3t)
          {x1=h2[p];
          n++;
          sum2t=sum2t-x1;}

    }
    return sum1t;*/
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    int sum1=0,sum2=0,sum3=0;
    for(int i=h1.size()-1;i>-1;i--){
        s1.push(h1[i]);
        sum1+=h1[i];
    }
    for(int j=h2.size()-1;j>-1;j--){
        s2.push(h2[j]);
        sum2+=h2[j];
    }
    for(int k=h3.size()-1;k>-1;k--){
        s3.push(h3[k]);
        sum3 +=h3[k];
    }
  while(true){
   if(sum1==sum2&&sum2==sum3)
       break;
      if(sum1<sum2){
        sum2 -=s2.top();
        s2.pop(); 
      }
      if(sum1<sum3){
            sum3-=s3.top();
            s3.pop();
      }
      if(sum2<sum1){
          sum1 -=s1.top();
          s1.pop();
      }
      if(sum2<sum3){
          sum3 -=s3.top();
          s3.pop();
      }
      if(sum3<sum1){
          sum1 -=s1.top();
          s1.pop();
      }
      if(sum3<sum2){
          sum2 -=s2.top();
          s2.pop();
      }


  }
    return sum1 ;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n1N2N3_temp;
    getline(cin, n1N2N3_temp);

    vector<string> n1N2N3 = split_string(n1N2N3_temp);

    int n1 = stoi(n1N2N3[0]);

    int n2 = stoi(n1N2N3[1]);

    int n3 = stoi(n1N2N3[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split_string(h1_temp_temp);

    vector<int> h1(n1);

    for (int h1_itr = 0; h1_itr < n1; h1_itr++) {
        int h1_item = stoi(h1_temp[h1_itr]);

        h1[h1_itr] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split_string(h2_temp_temp);

    vector<int> h2(n2);

    for (int h2_itr = 0; h2_itr < n2; h2_itr++) {
        int h2_item = stoi(h2_temp[h2_itr]);

        h2[h2_itr] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split_string(h3_temp_temp);

    vector<int> h3(n3);

    for (int h3_itr = 0; h3_itr < n3; h3_itr++) {
        int h3_item = stoi(h3_temp[h3_itr]);

        h3[h3_itr] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

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
