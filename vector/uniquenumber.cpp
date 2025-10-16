#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector:- ";
    cin>>n;

    vector <int> v(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element of vector:- ";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                v[i]=v[j]=-1;
            }
        }
    }
   
    for(int i=0;i<n;i++){
        if(v[i]>0){
            cout<<"\n The unique number is "<<v[i]<<"\n";
        }
    }
    
}