#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q,max;
	cin>>n;
	int arr[n];
	stack<int> monk;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i =0;
	int count = 0;
	int sum =0;
	cin>>q;
	cin>>max;
	while(q != 0){
		string query;
		cin>>query;
		if(query == "Harry"){
			monk.push(arr[i]);
			sum += arr[i];
			i++;
			count++;
		}
		if(query == "Remove"){
			sum -= monk.top();
			monk.pop();
			count--;
		}
		if(sum == max){
			break;
		}
		q--;
	}
	cout<<count;
}
