#include<iostream>
#include<vector>
using namespace std;
/*
If there is {1,2} then there are subsets 1,2,1 2 so sum will be 6
*/
void Subset(vector<int>&ar, int index,vector<vector<int>> &ans, vector<int>temp){
    if(index == ar.size()){
    ans.push_back(temp);
    return;
    }

    Subset(ar,index+1, ans, temp); // not include current index value
    
    // include current index value
    temp.push_back(ar[index]);
    Subset(ar,index+1,ans,temp);
    temp.pop_back();

}

void PrintSubset(vector<vector<int>> &ar){
    int sum =0;
    for(int i = 0; i<ar.size(); i++){
        for(int j =0; j<ar[i].size(); j++){
            cout<<ar[i][j]<<" ";
            sum +=ar[i][j];
        }
        cout<<endl;
    }

    cout<<"The sum of subset is "<<sum<<endl;
}


void SubsetSum(vector<int> &ar, int index , int sum){
    /*
    Time complexity - O(2^n) bcz at every node function call for twice
    Space complexity - O(n) only stack call is require
    */
    if(index == ar.size()){
        cout<<sum<<endl;
        
        return;
    }

    // not include 
    SubsetSum(ar, index+1, sum);

    // include
    sum = sum + ar[index];
    SubsetSum(ar, index+1, sum);
}

int main()
{
    vector<int> ar{1,2};
    int sum =0;
    SubsetSum(ar,0, sum);

    vector<int>temp;
    vector<vector<int>>ans;
    Subset(ar,0, ans,temp);
    PrintSubset(ans);
    
  return 0;
}