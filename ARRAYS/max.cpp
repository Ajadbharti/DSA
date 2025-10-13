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

   int max=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }

   cout<<"The largest element in array is "<<max<<"\n";
}