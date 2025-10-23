#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void array(vector <int> &v,int &p,int &x){
        for(int i=v.size();i>=p;i--){
            v[i+1]=v[i];
        }
        v[p]=x;
    }

};

int main(){
    int n;
    cout<<"Enter the size of array:- ";
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"\n Before insert the element\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int p;
    cout<<"\nEnter the size of index:- ";
    cin>>p;
    int x;
    cout<<"\nEnter the size of new element:- ";
    cin>>x;
    Solution s;
    s.array(v,p,x);
    
    cout<<"\n After insert the element\n";
    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }

}