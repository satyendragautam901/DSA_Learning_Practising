#include<iostream>
#include<vector>
using namespace std;

/*
Generate Paranthesis- This problem means generate valid paranthesis
                       n = 2 ()() and (()) this is valid paranthesis )()) this is not valid paranthesis
*/
void GeneratePara(int n, int left, int right, vector<string>&ans, string temp){
    if(left + right == 2*n){
      ans.push_back(temp);
      return;
    }

    if(left<n){// for left side paranthesis
      temp.push_back('(');
      GeneratePara(n, left+1, right, ans, temp);
      temp.pop_back();

    }

    if(right < left){ // for right side paranthesis
      temp.push_back(')');
      GeneratePara(n, left, right+1, ans, temp);
      temp.pop_back();

    }
}
int main()
{
  vector<string> ans;
  string temp;

  GeneratePara(2,0,0,ans, temp);
  for(int i = 0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}