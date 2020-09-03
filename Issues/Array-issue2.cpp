
//  Question Link:: "https://www.interviewbit.com/problems/wave-array/"
#include<algorithm>
#include<iostream>
using namespace std;
vector<int> Solution::wave(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    for(int i=1;i<n;i+=2){
        swap(A[i],A[i-1]);
    }
    return A;
}
