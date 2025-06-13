#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Factorial(int num){
    int fact = 1;
    while (num)
    {
        fact = fact * num;
        num--;
    }
    
    cout<<"Factorial is "<<fact<<endl;
}

void LargeFactorial(int num){
    vector<int>ans(1,1);

    while (num>1)
    {
        int carry = 0, res, size = ans.size();
        // cout<<size<<" ";
        // cout<<endl;
        for(int i = 0; i<ans.size(); i++){
            res = ans[i] * num + carry;
            carry = res / 10;
            ans[i] = res % 10;

        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry/=10;
        }
        num--;
        
    }

    // reverse
    reverse(ans.begin(), ans.end());
    
    cout<<endl;
    // print
    for(int a: ans)
        cout<<a<<" ";
}
int main()
{
    int number =5;

    // first calculate noraml factorial
    Factorial(number); // this can calculate factorial of only small numbers
    cout<<"==============="<<endl;
    LargeFactorial(number);
  return 0;
}