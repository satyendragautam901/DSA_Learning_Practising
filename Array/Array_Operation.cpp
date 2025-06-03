#include<iostream>
using namespace std;
// create a structure for array

struct Arr{
    int A[30];
    int length;
    int size;

    // display 

    void display(){
        for(int i = 0; i<length; i++){
            cout<<A[i]<<" ";
        }
    }

    int maximum(){
        int max = A[0];

        for(int i= 0; i<length; i++){
            if(A[i]>max){
                max = A[i];
            }
        }
       cout<<"Maximum element is "<<max<<endl;
    }

    // minimum
    int minimum(){
        int min = A[0];

        for(int i= 0; i<length; i++){



            if(A[i]<min){
                min = A[i];
                cout<<min<<" ";
            }
            
        }
        
       cout<<"minimum element is "<<min<<endl;
    }

    // sum of all the elements in an array

    int SumOfArray(){
        int sum = 0;
        for(int i = 0;i<length; i++){
            sum+=A[i];
        }

        cout<<"The sum of this array is "<<sum<<endl;
        cout<<"Avg of all the elements is "<<float (sum/length)<<endl;
    }

    // reversing of array
    void Reverse_Array(){
        for(int i =0; i<length/2; i++){
            swap(A[i], A[length - 1 -i]);
        }
    }

    // left shift
    void left_shift(){
        for(int i = 0; i<length ; i++){
            A[i] = A[i + 1];
        }
    }

    // left rotate
    void left_rotate(){
        int value = A[0];
        for(int i = 0; i<length ; i++){
            A[i] = A[i + 1];
        }
        A[length-1] = value;
    }

    // right shift
    void right_shift(){
        for(int i = length -1; i>=0 ; i--){
            A[i] = A[i-1];
        }
    }

    // right rotate
    void right_rotate(){
        int value = A[length-1];
        for(int i = length -1; i>=0 ; i--){
            A[i] = A[i-1];
        }
        A[0] = value;
    }

    // check if array is sorted or not
    void isSorted(){
        bool sorted = true;
        for (int i = 0; i < length-1; i++)
        {
            if(A[i]>A[i+1]){
                sorted = false;
            } 
        }
        if(sorted){
            cout<<"Array is sorted "<<endl;
        }
        else{
            cout<<"NOt sorted "<<endl;
        }
    }

    // insert in a sorted array

    void Insert_at(int value){
        int i = length -1;
        while (A[i]>value)
        {
            A[i+1] = A[i];
            i--;
        }

        A[i+1] = value;
        length++;
        
    }

    // arrangin -negative on left side
    void arranging(){
        int i = 0;
        int j = length - 1;
        while (i < j)
        {
            while (A[i] < 0 && i < j)
                i++;
            
            while (A[j] >= 0 && i < j)
                j--;
    
            if (i < j)
                swap(A[i], A[j]);
        }
    }
    
};


int main()
{

    // declare an array

    // Arr A1 = {{2,5,8,32,45,56,78,79,96,101}, 10, 30};
    // A1.maximum();
    // A1.minimum();
    // A1.SumOfArray();

    // Arr A1 = {{2,5,8,70,90}, 5, 30};
    // cout<<"Reversing is going to call "<<endl;
    // A1.Reverse_Array();

    // A1.left_shift();
    // A1.left_rotate();
    // A1.right_shift();

    // A1.right_rotate();
    // A1.isSorted();

    // A1.Insert_at(100);  

    // arranging

    Arr A1 = {{2,-5,-8,-70,90}, 5, 30};
    A1.arranging();
    A1.display();

  return 0;
}