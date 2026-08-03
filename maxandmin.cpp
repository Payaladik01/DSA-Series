#include<iostream>
using namespace std;

int getMax(int num[], int size){

    int maxi = INT_MIN;
    for(int i=0; i<size; i++){

        maxi = max(maxi, num[i]);

        
    }
}
int getMin(int num[], int size){

    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        mini= min(mini, num[i]);
    }
}
int main(){

    int size;
    cin>>size;

    int num[100];
    
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximun element in array is :"<<getMax(num, size);
    cout<<"Minimum element in array is :"<<getMin(num, size);

    return 0;

}