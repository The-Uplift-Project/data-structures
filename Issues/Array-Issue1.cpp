
// Question::  https://www.interviewbit.com/problems/first-missing-integer/

#include<algorithm>
#include<iostream>
using namespace std;
int Solution::firstMissingPositive(vector<innt> &A) {
    sort(A.begin(), A.end());
    int c = 1;
    for (auto const& i : A)
    {
        if (i<1)
        continue;
        else if (i==c)
        {
           ++c;
           continue;
        }
        else
        break;
    }
    return c;
}
//solved by @RadadiyaMohit
