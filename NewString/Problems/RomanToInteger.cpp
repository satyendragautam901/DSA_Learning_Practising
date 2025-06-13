#include<iostream>
using namespace std;

// this will convert to number from roman 
int Num(char ch){

    if(ch =='I'){
        return 1;
    }else if(ch =='V'){
        return 5;
    }
    else if(ch =='X'){
        return 10;
    }
    else if(ch =='L'){
        return 50;
    }
    else if(ch =='C'){
        return 100;
    }
    else if(ch =='D'){
        return 500;
    }
    else if(ch =='M'){
        return 1000;
    }
    else{
        return 0;
    }
}
void CovertToRoman(string str){
    int i = 0;
    int sum = 0;
    while (i < str.size()-1)
    {
        if(Num(str[i]) < Num(str[i+1])){ // current value is less than next
            sum = sum -Num(str[i]);
            
        }
        else{
            sum = sum + Num(str[i]);
        }

        i++;
    }
    
    // loop is running till n-1(last) so we need to consider this too
    sum +=Num(str[str.size()-1]);

    cout<<"Roman to Integer is "<<sum<<endl;
}
int main()
{
    /*
    1->I
    2->II
    5->V
    10->x
    50->L
    100->C
    500->D
    1000->M
    */

    // approach 
    /*
    step1: compare next roman value to current. 
    step2: if current is less than next then -current value + next value
    step3: otherwise current value + next value
    */

    string Roman = "MCCXLVIII";
    CovertToRoman(Roman); // Time complexity is O(n)
  return 0;
}