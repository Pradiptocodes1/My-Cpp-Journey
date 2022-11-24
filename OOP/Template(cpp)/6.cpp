//Write a program to define data members of template type.
#include<iostream>
using namespace std;
template<class T>
class disp{
    T x;
    public:
    disp(T n){
        x=n;
    }
    void display(){
        cout<<"The value is: "<<x<<endl;
    }

};
int main(){
    disp<int>num1(25);
    disp<float>num2(68.99);
    disp<char>char1('I');
    num1.display();
    num2.display();
    char1.display();

}