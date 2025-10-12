#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int m;
    cout<<"Enter the number:- ";
    cin>>m;

    int gcd=0;

    for(int i=1;i<=(n/2,m/2);i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    cout<<"The gcd of given number is "<<gcd;
}