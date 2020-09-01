#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string a) {
   stack<char> s;/*
    long int count=0;
    for(long int i=0;i<s.length();i++)
    {
        if(s[i]=='['|| s[i]=='{'|| s[i]=='(')
        {s1.push(s[i]);
        count++;}
        else if(((s[i]==']') && (s1.top()=='['))||((s[i]=='}') && (s1.top()=='{'))|| ((s[i]==')') && (s1.top()=='('))
        {
            s1.pop();
            count++;
        }
    }
   if(s1.empty() && count==s.length())
   return("YES");
   else
   return("NO");*/
   int i,flag=0;
   string con;
    for(i=0;i<a.length();i++){
        switch(a[i]){
        case '{':
        case '[':
        case '(':
            s.push(a[i]);
            break;
        case '}':
            if(s.empty()||s.top()!='{'){
                con ="NO";
                flag=1;
                goto exit;
            }
            s.pop();
            break;
        case ']':
            if(s.empty()||s.top()!='['){
                 con ="NO";
                flag=1;
                goto exit;
            }
            s.pop();
            break;
        case ')':
            if(s.empty()||s.top()!='('){
                 con ="NO";
                flag=1;
                goto exit;
            }
            s.pop();
            break;
        }
    }
    exit: if(s.empty()&&!flag)
                con="YES";
          if(!flag&&!s.empty())
                
                con= "NO";
    return con;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
