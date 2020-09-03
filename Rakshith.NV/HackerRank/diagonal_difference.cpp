#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Extra Question
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; 
    cin >> N; 
    
    int i, j; 
    
    int sumdiag1 = 0; 
    int sumdiag2 = 0; 
    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++)
        {
           int no; 
           cin >> no; 
           if(i == j)
               sumdiag1 += no; 
           if(i+j == N-1)
              sumdiag2 += no; 
        }
    }
    
    cout << abs(sumdiag1 - sumdiag2);
    return 0;
}
