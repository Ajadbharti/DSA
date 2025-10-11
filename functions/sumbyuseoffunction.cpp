#include<iostream>
using namespace std;
int add(int x,int y){
    int sum=x+y;
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int m;
    cout<<"Enter the number:- ";
    cin>>m;
    int result=add(m,n);
    cout<<"The sum is "<<result<<"\n";
}