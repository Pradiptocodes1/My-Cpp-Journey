//Calculate price of various box shapes
#include<iostream>
using namespace std;
class Shape{
    protected:
    int l,b,h;
    public:
    virtual void getval()=0;
    virtual void getarea()=0;
    virtual void getprice()=0;
};
class TwoD:public Shape{
    public:
    void getval(){
        cout<<"Enter the length and breadth: ";
        cin>>l>>b;
    }
    void getarea(){
        cout<<"Area is: "<<l*b<<endl;
    }
    void getprice(){
        cout<<"The price wil be: "<<40*l*b<<endl;
    }
};
class ThreeD:public Shape{
    public:
    void getval(){
        cout<<"Enter the length, breadth and height: ";
        cin>>l>>b>>h;
    }
    void getarea(){
        cout<<"Area is: "<<l*b*h<<endl;
    }
    void getprice(){
        cout<<"The price will be: "<<60*l*b*h<<endl;
    }
};
int main(){
    TwoD a;
    ThreeD b;
    a.getval();
    a.getarea();
    a.getprice();
    b.getval();
    b.getarea();
    b.getprice();
}