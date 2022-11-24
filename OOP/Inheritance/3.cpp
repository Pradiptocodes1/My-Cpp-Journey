//Add two numbers using multiple inheritance
#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void inp1(int n){
        a=n;
    }
};
class B{
    protected:
    int b;
    public:
    void inp2(int n){
        b=n;
    }
};
class C:public A, public B{
    public:
    void displ(){
        cout<<a+b<<endl;
    }
};
int main(){
    C c;
    c.inp1(5);
    c.inp2(6);
    c.displ();
}