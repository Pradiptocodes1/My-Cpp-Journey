#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area()=0;
    void width(int w){
        s_width=w;
    }
    void length(int l){
        s_length=l;
    }
    protected:
    int s_width;
    int s_length;
};
class Rectangle:public Shape{
    public:
    void area(){
        cout<<"The area of the rectangle is:"<<s_length*s_width<<endl;
    }
};
class Square:public Shape{
    public:
    void area(){
        cout<<"The area of the square is: "<<s_length*s_length<<endl;
    }
};
int main(){
    Rectangle R;
    Square S;
    R.length(20);
    R.width(20);
    S.length(30);
    R.area();
    S.area();
}