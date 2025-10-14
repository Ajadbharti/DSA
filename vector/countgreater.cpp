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
    int x;
    cout<<"Enter the count number:- ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"The final count is "<<count;
}