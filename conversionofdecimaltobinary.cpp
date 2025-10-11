#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the decimal number:- ";
    cin>>n;
    int ans=0;
    int power=1;
    while(n!=0){
        int remainder=n%2;
        ans+=remainder*power;
        power*=10;
        n/=2;
    }
    cout<<"The decimal number is "<<ans<<"\n";
}