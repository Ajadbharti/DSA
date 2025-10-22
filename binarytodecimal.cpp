#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary number:- ";
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter the target value:- ";
    cin>>target;
    int f=0;
    int l=n-1;
    while(f<=l){
        int mid=(f+l)/2;
        if(v[mid]==target){
            cout<<mid;
            break;
        }else if(v[mid]<target){
            f=mid+1;
        }else{
            l=mid-1;
        }
    }
   

}