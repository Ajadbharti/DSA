#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary number:- ";
    cin>>n;
    int ans=0,power=1;
    while(n!=0){
        int lastdigits=n%10;
        ans+=lastdigits*power;
        power*=2;
        n/=10;
    }
    cout<<"The decimal value is "<<ans<<"\n";
}