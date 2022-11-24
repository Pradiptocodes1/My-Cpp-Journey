//WAP to define a class called Employee and 
//display the personal and salary details of five employees using single inheritance.
#include<iostream>
#include<string.h>
using namespace std;
class Basic{
    protected:
    string name;
    int age;
    int salary;
    public:
    void getdata(){
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"Enter the age of the employee: ";
        cin>>age;
    }

};
class Salary:public Basic{
    public:
    void getsalary(){
        cout<<"Enter the salary of the employee: ";
        cin>>salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<endl;
    }

};
int main(){
    Salary s[5];
    for(int i=0;i<5;i++){
        s[i].getdata();
        s[i].getsalary();
    }
    cout<<endl;
    cout<<"--:Displaying the employee details:--"<<endl;
    for(int i=0;i<5;i++){
        s[i].display();
    }
}