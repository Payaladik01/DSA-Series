#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int s=0;
    int e= size-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
    }
    if(key>arr[mid]){
        s = mid+1;
    }
    else{
        e= mid-1;
    }
    mid= s+(e-s)/2;
}

int main(){

    int even[8]={2,4,6,8,12,13,14,15};
    int odd[5]={1,3,5,7,9};

    int index= binarySearch(even , 8, 12);
    cout<<"Element is present at index :"<<index<<endl;
    return 0;




    
}