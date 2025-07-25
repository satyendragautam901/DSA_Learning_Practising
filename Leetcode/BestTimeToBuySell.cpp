#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) { // O(n) time and O(n) space.
        int n = prices.size();
        vector<int>ans(n,0);

        for(int i = 0; i<n-1; i++){
            int maxprofit = 0;
            for(int j = i+1; j<n; j++){
                if(prices[j] > prices[i]){
                   maxprofit = max(maxprofit, prices[j] - prices[i]);
                }
            }
            ans[i] = maxprofit;
        }

        for(auto a: ans){
            cout<<a<<" ";
        }
        cout<<endl;
        int realProfit = 0;
        for(int i = 0; i<n ; i++){
            realProfit = max(ans[i], realProfit);
        }
        return realProfit;
    }

int maxProfitEfficient(vector<int>& prices) { // O(n) time and space O(1)
    int minSoFar = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        maxProfit = max(maxProfit, prices[i] - minSoFar);
        minSoFar = min(minSoFar, prices[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int>price{7,1,5,3,6,4};
    int c = maxProfitEfficient(price);
    cout<<"max profit "<<c<<endl;
  return 0;
}