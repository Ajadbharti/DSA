#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int main(){
    int num=5;
    int result=square(num);
    cout<<result;
}