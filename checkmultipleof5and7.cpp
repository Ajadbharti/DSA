#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:-";
    cin>>n;
    if(n%7==0 &n%5==0){
        cout<<"The number "<<n<<"is multiple of 5 and 7.";
    }
    else{
         cout<<"The number "<<n<<" is not multiple of 5 and 7.";
    }
}