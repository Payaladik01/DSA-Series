#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
}
int main(){

    int arr[5]={2,4,5,1,8};

    cout<<"Enter the element to search:"<<endl;
    
    int key;
    cin>>key;

    bool found = linearSearch(arr, 5 ,key);

    if(found){
        cout<<"Element is present"<<endl;

    }
    else{
        cout<<"Element is absent"<<endl;
    }
    
}