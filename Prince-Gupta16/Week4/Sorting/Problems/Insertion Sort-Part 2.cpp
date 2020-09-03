#include<bits/stdc++.h>
using namespace std;

void insertionSort(int ar_size, int *ar) {
 
    int small = 0;
    for(int i = 0; i < ar_size-1;i++){
     
        if(ar[i] > ar[i+1]){
            small = ar[i+1];
            int j = i;
            while(ar[j] > small){
                ar[j+1] = ar[j];
                j--;
            }
            ar[j+1] = small;
        }
        for(int k = 0; k < ar_size; k++)cout << ar[k] << " ";
        cout << endl;
    }
}
int main(void) {
 
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
    }
   insertionSort(_ar_size, _ar);
   return 0;
}