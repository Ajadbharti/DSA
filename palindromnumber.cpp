#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
     int rev=0;
     int original=n;
     while(n!=0){
        int ld=n%10;
        rev=rev*10+ld;
        n/=10;
     }
     if(rev==original){
        cout<<"The number is palindrom number.";
     }
     else{
        cout<<"The number is not palindrom number.";
     }
}