#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void LCPBruteForce(vector<string> &str){ // this is brute force approach
    string A = str[0];
    string B = str[1];
    string C = str[2];

    string ans = "";
    for(int i = 0; i < max(max(A.length(), B.length()), C.length()); i++){
        if (A[i] == B[i] && B[i] == C[i])
            ans.push_back(A[i]);
        else
            break;
    }

    cout<<ans;
}

void EfficientLCP(vector<string> &str){
    // first sort the string for easy calculation

    sort(str.begin(), str.end());

    // now only need to compare from first and last element.

    // LCP is between first and last strings
    string first = str.front(); // first element
    string last = str.back(); // last element

    string ans = "";
    for(int i = 0; i < min(first.size(), last.size()); i++){
        if(first[i] == last[i])
            ans += first[i];
        else
            break;
    }

    cout << ans << endl;

}

int main()
{
    vector<string>str{"flower","flow","flight"};
    EfficientLCP(str);
  return 0;
}