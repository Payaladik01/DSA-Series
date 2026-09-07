#include<iostream>
#include<climits>
using namespace std;
int largestSum(int arr[][3], int row, int col){

    int maxi= INT_MIN;
    int rowIndex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        if(sum>maxi){
        maxi=sum;
        rowIndex=row;
    }
    }
    
    cout<<"The max sum is:"<<maxi<<endl;
    return rowIndex;
}
int printSum(int arr[3][3], int row, int col){
    cout<<"Printing Sum:>>"<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout<<sum <<"  ";
    }
    cout<<endl;
}
int printColSum(int arr[3][3], int row, int col){
    cout<<"Printing Sum:>>"<<endl;
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<sum <<"  ";
    }
    cout<<endl;
}
bool isPresent(int arr[3][3],int target, int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3];
    //taking input
    cout<<"Enter the array elements:"<<endl;

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
        cout<<endl;
    }
    //printing output
    cout<<"Elements present in an array are :"<<endl;

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
    cout<<"Enter the element to search:"<<endl;
    int target;
    cin>>target;

    bool element=isPresent(arr,9,3,3);
    if(element){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }

    printSum(arr,3,3);
    printColSum(arr,3,3);
    
    cout<<"Max sum row is:"<<largestSum(arr, 3,3)<<endl;

    return 0;

}