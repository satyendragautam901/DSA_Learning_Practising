#include<iostream>
#include<vector>
using namespace std;
/*
If there is {1,5,6} , sum = 7 then add 1 , 7times or 1,5,1 or 1,1,5 or 5,1,1 or 1,6 or 6,1 so total 6 ways to find sum = 7
*/

int WaysSumOrderDoesNotMatter(vector<int> &ar,int index, int sum){ // Coin Change – Count Combinations (Order Doesn't Matter)
    if(sum == 0){
        return 1;
    }

    if(index == ar.size() || sum<0){
        return 0;
    }
    int temp = WaysSumOrderDoesNotMatter(ar,index+1 , sum); // to not include current index

    return  temp + WaysSumOrderDoesNotMatter(ar, index, sum-ar[index]); // include current index
}

int WaysSumOrderMatters(vector<int> &ar, int sum){ // Coin Change – Count Permutations (Order Matters)
    if(sum == 0){
        return 1;
    }

    if(sum<0){
        return 0;
    }
    int ans = 0;
    for(int i = 0; i<ar.size(); i++){// for each call it will have choice to include current index or next index
        ans+=WaysSumOrderMatters(ar,sum-ar[i]);
    }

    return ans;
}
int main()
{
    vector<int>ar{1,5,6};
    cout<<WaysSumOrderDoesNotMatter(ar,0, 7);
  return 0;
}