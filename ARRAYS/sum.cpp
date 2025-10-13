#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:- ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    cout<<"The sum is "<<sum;
}