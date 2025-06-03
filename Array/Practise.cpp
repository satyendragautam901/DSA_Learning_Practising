#include<iostream>
using namespace std;
struct Arr{
    int A[20];
    int size;
    int length;

    // display
    void display(){
        for(int i = 0;i<length ; i++){
            cout<<A[i]<<" ";
        }
    }

    // append
    void append(int value){
        A[length] = value;
        length++;
    }

    //insert
    void insert(int index, int value){
        if(index >= 0 && index <= length){
            for(int i = length; i>index; i--){
                A[i] = A[i-1];
            }
            A[index] = value;
            length++;
        }
        
    }

    // delete
    void delete_arr(int index){
        if(index>=0 && index<length){
            for(int i = index; i < length -1; i++){
                A[i] =A[i+1];
            }
            length--;
        }
    }

    int linear_search(int key){
        for(int i = 0; i<length; i++){
            if(key == A[i]){
                // after successul it move to i-1 : Transposition
                // swap(A[i], A[i-1]);
                // return i-1;
                return i;
            }
        }
        return -1;
    }

    int Binary_Search(int l , int h, int key){
        while (l<=h)
        {
            int  mid = (l + h)/ 2;
            if(A[mid] == key){
                return mid;
            }
            else if(A[mid]<key){
                l = mid+1;
            }
            else {
               h = mid-1;
            }
        }
        return -1;
        
    }

    
   
    
};

// c style code
void show(Arr ar){
    for(int i= 0; i<ar.length; i++){
        cout<<ar.A[i]<<" ";
    }
}

void add_at(Arr *ar, int value){
    if(ar->length < ar->size){

        ar->A[ar->length] = value;
        ar->length++;
        cout<<" ar length "<<ar->length<<endl;
    }
}

void insert_at(Arr *ar, int index, int value){
    if(ar->length>0 && ar->length < ar->size){
        for(int i = ar->length; i>index; i--){
            ar->A[i] = ar->A[i-1];
        }
        ar->A[index] = value;
        ar->length++;
    }
}

void delete_at(Arr *ar, int index){
    if(index >= 0 && index < ar->length ){

        for(int i= index; i< ar->length -1; i++){
            ar->A[i] = ar->A[i+1];
        }

        ar->length--;
    }
}

int main()
{

    Arr ar{{1,2,3,4,5}, 20, 5};
    // ar.append(80);
    // ar.insert(3, 500);

    // ar.delete_arr(2);
    // ar.display();
    cout<<"Element fount at "<< ar.linear_search(4)<<" ";
    cout<<endl<<"Elements search using binary search "<< ar.Binary_Search(0, 4, 10)<<" "<<endl;
    ar.display();

    // c-style code 
   
    cout<<endl<<"printing using c-style code "<<endl;
    // add_at(&ar, 500);
    // insert_at(&ar, 0, 40);

    // delete_at(&ar, 0);
    // show(ar);
  return 0;
}