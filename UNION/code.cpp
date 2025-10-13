#include<iostream>
#include<cstring>
using namespace std;

union geeks{
    int id;
    int salary;
    char name[30];
    int age;

};
int main(){
    union geeks g;
    g.id=1;
    cout<<"ID : "<<g.id<<"\n";
    strcpy(g.name,"Ajju");
    cout<<"Name : "<<g.name<<"\n";
    g.salary=50000;
    cout<<"Salary : "<<g.salary<<"\n";
    g.age=20;
    cout<<"Age : "<<g.age<<"\n";

}