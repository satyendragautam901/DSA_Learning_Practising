#include <iostream>
#include <stack>
using namespace std;
/*
This program will check paranthesis is valid or not 
Number of opening and closing be same with it's neightbour 
eg: ()() ✅ (() ❌
*/
bool isValid(string s)
{
    stack<char> st; // temporary stack to track

    for (int i = 0; i < s.size(); i++)
    {

        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        { // if opening para then directly push
            st.push(ch);
        }
        else
        { // if closing para then check

            if (st.empty())
                return false; // if stack is empty

            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == ']' && top == '[') ||
                (ch == '}' && top == '{'))
            {
                st.pop();
            }
            else
            {
                return false; // mismatched closing
            }
        }
    }

    return st.empty(); // ✅ correct check
}
int main()
{
    string str = "()";
    cout<<isValid(str)<<endl;
    return 0;
}