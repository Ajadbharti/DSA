#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int flag=1;
    if(n==1){
        flag=0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==1){
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
}