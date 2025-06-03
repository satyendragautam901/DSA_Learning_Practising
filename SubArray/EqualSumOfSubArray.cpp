#include <iostream>
#include <vector>
using namespace std;
void SumOfSubarray(vector<int> &ar)
{
    bool found = false;
    for (int i = 0; i < ar.size() - 1; i++)
    {
        int sum1 = 0;
        int sum2 = 0;
        // first sub array
        for (int j = 0; j <= i; j++)
        {
            sum1 += ar[j];
        }

        // second sub array
        for (int k = i + 1; k < ar.size(); k++)
        {
            sum2 += ar[k];
        }
        
        if (sum1 == sum2)
        {
            found = true;
            break;
        }
        
    }
    if(found){
        cout<<"sum of two sub array is exist "<<endl;
    }
    else{
        cout<<"sorry "<<endl;
    }
}

// sum of sub array using prefix
void SumOfSubArrayUsingPrefix(vector<int> &ar){
    int total_sum = 0;

    // Step 1: Calculate total sum of array
    for(int i = 0; i < ar.size(); i++){
        total_sum += ar[i];
    }
    cout<<"sum"<<total_sum<<endl;
    int prefix = 0;
    for(int i = 0; i < ar.size() - 1; i++){
        prefix += ar[i];
        cout<<prefix<<endl;
        int suffix = total_sum - prefix;

        if(prefix == suffix){
            cout << "Exists at index " << i << endl;
            return;
        }
    }

    cout << "Does not exist!" << endl;
}


int main()
{
    vector<int> ar{3, 4, -2, 5, 8, 20, -10, 8};
    // SumOfSubarray(ar);
    SumOfSubArrayUsingPrefix(ar);
    return 0;
}