#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector:- ";
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    bool sort=true;
    for(int i=1;i<n;i++){
        if(v[i]<=v[i-1]){
            sort=false;
            break;
        }
    }
    if(sort){
        cout<<"Vector is sorted.";
    }else{
         cout<<"Vector is not sorted.";
    }
}