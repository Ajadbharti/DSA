#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the size of vector:- ";
    cin>>x;
    vector <int> v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    int n;
    cout<<"Enter the check number:- ";
    cin>>n;
    int oc=-1;
    for(int i=0;i<x;i++){
        if(v[i]==n){
            oc=i;
        }
    }
    cout<<"The last occurance number:-"<<oc;
}