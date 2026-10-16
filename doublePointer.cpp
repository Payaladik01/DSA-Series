#include<iostream>
using namespace std;

int main(){

    int i=5;
    int* p = &i;
    int** p2 = &p;

    cout<<"Everything is okay"<<endl;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<*p2<<endl;
    

}