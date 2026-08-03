#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int s=0;
    int e = n-1;
    int ans =  -1;
    int mid = s + (e-s)/2;

    while(s<=e){

    if(arr[mid]==key){
        ans = mid ;
        e = mid -1;
    }
    else if(key > arr[mid]){
        s = mid +1;
    }
    else if(key < arr[mid]){
        e = mid-1;
    }
    mid = s + (e-s)/2;
}
}
int lastOcc(int arr[], int n, int key){

    int s=0;
    int e = n-1;
    int ans =  -1;
    int mid = s + (e-s)/2;

    while(s<=e){

    if(arr[mid]==key){
        ans = mid ;
        s = mid +1;
    }
    else if(key > arr[mid]){
        s = mid +1;
    }
    else if(key < arr[mid]){
        e = mid-1;
    }
    mid = s + (e-s)/2;
}
}
int main(){

    int even[6]={1,3,3,3,7,5};

    cout<<"First Occurence of 3 is at index :" << firstOcc( even , 6, 3)<<endl;
    cout<<"Last Occurence of 3 is at index :" << lastOcc( even , 6, 3)<<endl;



    return 0;

}