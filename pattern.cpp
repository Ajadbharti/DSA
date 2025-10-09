//      1
//     121
//    12321
//   1234321
//  123454321

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:- ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=i;j<=x;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int m=i-1;m>=1;m--){
            cout<<m;
        }
        cout<<"\n";
    }
}