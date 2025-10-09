#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int i=1,count=0;
    do{
        if(i%2==0){
            cout<<i<<" ";
            count++;
        }
        i++;
    }while(i<=n);
    cout<<"\nThe even number is:- "<<count<<endl;
}