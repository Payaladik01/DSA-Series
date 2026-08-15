#include<iostream>
using namespace std ;

int reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
getlength(char name[]){
    int count =0;
    for(int i=0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter your name :"<<endl;
    cin>>name;
    int len= getlength(name);
    cout<<"Length:"<<len<<endl;
    
    reverse(name, len);
    cout<<"Your name is:"<<name<<endl;
    return 0;
}