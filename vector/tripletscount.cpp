#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector:- ";
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element:- ";
        cin>>arr[i];
    }
    int target,count=0;
    cout<<"Enter the target:- ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" +  " <<arr[j]<<" + "<<arr[k]<<"\n";
                    count++;
                }
            }
        }
    }
    cout<<"\n the count:- "<<count;
}