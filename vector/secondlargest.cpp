#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:- ";
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element:- ";
        cin>>v[i];
    }
   sort(v.begin(),v.end());
   int fl=v[n-1];
   int sl=0;
   for(int i=0;i<n;i++){
        if(v[i]<fl){
            sl=v[i];
        }
   }
   cout<<"\n The largest element is "<<fl<<"\n";
   cout<<"\n The second largest element is "<<sl<<"\n";
}