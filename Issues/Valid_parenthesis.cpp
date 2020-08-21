/*
 * Author: Mohit Radadiya 
 * Problem: Valid Parenthesis
 */
#include <bits/stdc++.h> 
using namespace std; 
bool isParenthesis(char c) 
{ 
	return ((c == '(') || (c == ')')); 
} 
bool isValidString(string st) 
{ 
	int cnt = 0; 
	for (int i = 0; i < st.length(); i++) 
	{ 
		if(st[i] == '(') 
		{	
			cnt++;
		} 
		else if(st[i] == ')') 
		{
			cnt--;
		} 
		if(cnt < 0) 
		{	
			return false;
		} 
	} 
	return (cnt == 0); 
} 

void rip(string st) 
{ 
	if (st.empty()) 
	{	
		return ;
	} 
	set<string> v; 
	queue<string> q; 
	string temp; 
	bool level; 
	q.push(st); 
	v.insert(st); 
	while (!q.empty()) 
	{ 
		st = q.front(); q.pop(); 
		if (isValidString(st)) 
		{ 
			cout << st << endl; 
			level = true; 
		} 
		if (level) 
		{	
			continue;
		} 
		for (int i = 0; i < st.length(); i++) 
		{ 
			if (!isParenthesis(st[i])) 
			{	
				continue;
			} 
			temp = st.substr(0, i) + st.substr(i + 1); 
			if (v.find(temp) == v.end()) 
			{ 
				q.push(temp); 
				v.insert(temp); 
			} 
		} 
	} 
}
int main() 
{ 
	string s;
	cin >> s; 
	rip(s);
	return 0; 
} 
