//array is sorted or not 
#include<iostream>
using namespace std;

/*bool isSorted(int arr[], int size){
    //base case
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int remainingPart= isSorted(arr+1,size-1);
        return remainingPart;
    
    }
}
int main(){
    int arr[5]={2,4,5,7,9};
    int size=5;

    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    
    int arraySum(int arr[], int n){
        //base case
        
        if(n==0){
            return 0;
        }
        int ans=(arr[0]+arraySum(arr+1,n-1));
    }
    int main(){
        int arr[5]={2,4,6,8,10};
        int n=5;

        int ans= arraySum(arr,n);
        cout<<"The sum of given array is"<<ans<<endl;
        return 0;
        
bool linearSearch(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}
int main(){
    int arr[5]={1,3,5,7,9};
    int size=5;
    int key;
    cin>>key;

    int ans= linearSearch(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;

    }
    else{
        cout<<"absent"<<endl;
    }
    return 0;
    
int getSum(int arr[], int size){
    //base case
    if(size==0){
        return 0;
    }
    int ans= (arr[0]+ getSum(arr+1,size-1));
    
}
int main(){
    int arr[5]={2,4,6,8,10};
    int size=5;

    int ans = getSum(arr,size);
    if(ans){
        cout<<"The sum of array is "<<endl;

    }
    return 0;
}
bool linearSearch(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    bool rm=linearSearch(arr+1,size-1,key);
    return rm;
}
int main(){
    int arr[5]={1,3,5,7,9};
    int size=5;
    int key;
    cin>>key;

    int ans= linearSearch(arr,size,key);
    if(ans){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
bool binarySearch(int *arr,int s, int e, int key){
    //base case
    if(s>e){
        return false;
    }
    int mid= s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[6]={1,3,5,7,9,11};
    int size=6;
    int key;
    cin>>key;

    cout<<"key present or not"<<binarySearch(arr,0,5,key);
    return 0;
}
void reverse(string& name,int i, int j){
    cout<<"call received for  " <<name<<endl;
    //base case
    if(i>j){
        return;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    reverse(name,i,j);
}
int main(){
    string name="abcde";
    cout<<endl;
    reverse(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}
int power(int a, int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //recursive call
    int ans= power(a, b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    int a,b; 
    cin>> a >>b;
    cout<<endl;
    int ans= power(a,b);
    cout<<ans<<endl;
    return 0;
}
    */
void sortArray(int arr[],int n){
    //base case
    if(n==0 || n==1){
        return ;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    sortArray(arr, n-1);
}
int main(){
    int arr[5]={2,8,4,6,9};
    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}