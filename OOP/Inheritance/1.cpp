//Multiply two integers using the concept of inheritance.
#include<iostream>
using namespace std;
class num{
    protected:
    int a,b,c;
    public:
    void multiply(int x,int y){
        a=x;b=y;
        c=a*b;
    }

};
class multip:public num{
    public:
    void displ(){
        cout<<"Product after multiplication: "<<c<<endl;
    }
};
int main(){
 multip m;
 m.multiply(23,3);
 m.displ();
}