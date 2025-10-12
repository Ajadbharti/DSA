#include<iostream>
using namespace std;
class Day{
    public:
    int day;
    void checkday(){
        if(day==1){
            cout<<"Sunday";

        }
        else if(day==2){
            cout<<"Monday";
        }
        else if(day==3){
            cout<<"Tuesday";
        }
        else if(day==4){
            cout<<"Wednesday";
        }
        else if(day==5){
            cout<<"Thrusday";
        }
        else if(day==6){
            cout<<"Friday";
        }
        else if(day==7){
            cout<<"Saturday";
        }
        else if(day==0){
            cout<<"Weekend";
        }
        else{
            cout<<"Invalid";
        }
    }
};
int main(){
    Day d;
    cout<<"Enter the num:- ";
    cin>>d.day;
    d.checkday();
}