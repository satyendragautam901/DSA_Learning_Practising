#include<iostream>
#include<vector>
using namespace std;
/*
Permutation - if there is {1,2} then 1,2 and 2,1 permutation will be there (2!) .
{1,2,3} => 1,2,3 | 1,3,2 | 2, 1,3 | 2,3,1 | 3,2,1 |3,1,2 (3!)
*/

void Permut(vector<int> &ar, vector<vector<int>> &ans, vector<int>&temp, vector<bool> freq){
    if(temp.size() == ar.size()){
        ans.push_back(temp);
        return;
    }

    for(int i = 0; i<ar.size(); i++){
        if(freq[i] == 0){
            
            freq[i] =1; // mark that it is visited
            temp.push_back(ar[i]); // include current index

            Permut(ar,ans,temp,freq);

            freq[i] =0; // during returning make it in previoud condition
            temp.pop_back(); // pop temp or backtrack 
        }
    }
}

void PermutationUsingSwap(vector<int> &ar,int index, vector<vector<int>> &ans){ // withut extra temp and freq variable

    if(index == ar.size()){
        cout<<"base"<<endl;
        ans.push_back(ar);
        return;
    }

    for(int i = index; i<ar.size(); i++){
        swap(ar[i], ar[index]); // swap and then call 
        PermutationUsingSwap(ar, index + 1, ans);
        swap(ar[i], ar[index]); // swap back to previous position
    }

}
int main()
{
    vector<int>ar{1,2};
    vector<vector<int>>ans; // store actual answer

    vector<int>temp; // store temporary answer
    vector<bool>freq(ar.size(),0); // store frequency that this element if visited or not


    // Permut(ar,ans,temp,freq);

    PermutationUsingSwap(ar,0, ans);
    // print ans for verify
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}