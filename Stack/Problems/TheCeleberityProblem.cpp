#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int celebrity(vector<vector<int>>& mat) {
        stack<int> temp;
        int n = mat.size();
        
        for(int i = 0; i < n; i++) temp.push(i);
        
        // Elimination
        while(temp.size() > 1) {
            int first = temp.top(); temp.pop();
            int second = temp.top(); temp.pop();
            
            if(mat[first][second] == 1) {
                temp.push(second); // first knows second
            } else {
                temp.push(first); // first doesn't know second
            }
        }
        
        if(temp.empty()) return -1;
        
        int candidate = temp.top(); temp.pop();
        
        // Verification
        for(int i = 0; i < n; i++) {
            if(i != candidate) { // candidate don't verify itself

                // if candidate know someone except himself/herself then don't be celeb

                if(mat[candidate][i] != 0 || mat[i][candidate] != 1) {
                    return -1;
                }
            }
        }
        
        return candidate;
    }
int main()
{
    vector<vector<int>>mat{
    {0,1,0},
    {0,0,0},
    {0,1,0}
    };
 cout<<celebrity(mat);

  return 0;
}