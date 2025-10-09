//  question number:- 3

//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:- ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=i;j<x;j++){
            cout<<" ";
        }
        for(int t=1;t<=2*i-1;t++){
                cout<<"*";
            }
        cout<<"\n";
    }
}
