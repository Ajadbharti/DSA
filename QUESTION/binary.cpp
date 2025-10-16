#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:- ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    int m;
    cout<<"Enter the target element:- ";
    cin>>m;

    int f=0,l=n-1;

    while(f<=l){
        int mid=(f+l)/2;
        if(arr[mid]==m){
            cout<<"index is:- "<<mid<<"\n";
             cout<<"element is:- "<<arr[mid];
            break;
        }
        else if(arr[mid]<m){
            f=mid+1;
        }
        else{
            l=mid-1;
        }
    
    }
   
    
}