
// question :- sum of series if number is Even then add in sum if number is odd then subtract from sum??


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int sum=0;
   for(int i=1;i<=n;i++){
    if(i%2==0){
        sum+=i;
    }else{
        sum-=i;
    }
   }
    cout<<"The sum of number is:- "<<sum<<"\n";
}