#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s;
    cout<<"Enter the size of vector:- ";
    cin>>s;
    
    vector <int> arr(s);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int target,count=0;
    cout<<"Enter the target:- ";
    cin>>target;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" + "<<arr[j]<<"\n";
                count++;
            }
        }
    }
    cout<<"\n count is:= "<<count;

}