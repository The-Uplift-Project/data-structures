#include <bits/stdc++.h>
#include <stack>

using namespace std;

// Complete the poisonousPlants function below.
void poisonousPlants(vector<int> p) {
   
     stack<int> abc;
     vector<int> :: iterator it;
     it = p.begin();
     int n = p.size();
     int flag = 0;
     int count = 0;                                       // the concept is :
     int psuhVal;                                        // make a list of stacks and apppend the stack such that
     cout<<"im in"<<endl;                                // ot contains elements in decreasing order
     while(!abc.empty() || (abc.empty() && flag == 0)){  // if any element greater is encountered push it in new stack
         if(flag == 1){                                  // so next day the top element will be removed
             abc.pop();                                  // then see if the stacks can be merged so when only one stack is remained
         }                                               // loop shld exit
         flag = 0;
            int k = p.size();
            for(int i=0;i<k;i++){
                if(!abc.empty()){
                if(abc.top() < p[0]){
                    psuhVal = abc.top();
                    abc.pop();
                }
                else{
                    p.push_back(p[0]);
                    psuhVal = abc.top();
                    abc.pop();
                }
                }
                if(psuhVal != p[0]){
                abc.push(p[0]);
                }
                if(flag == 0){
                    p.push_back(p[0]);
                }
                p.erase(it); 
                         flag = 1;
            }

            count += 1;
     }
     cout<<count;

}
int main(){
    vector<int> a = {3,6,2,7,5};
    poisonousPlants(a);
    return 0;
}