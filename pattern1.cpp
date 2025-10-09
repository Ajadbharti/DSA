

// question number:- 2.

// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number:- ";
    cin>>x;
    for(int i=5;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}


