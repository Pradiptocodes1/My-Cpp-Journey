#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    void area(){
        cout<<length*breadth<<endl;
    }
    Rectangle operator ++(int){
        length++;
        breadth++;
    }
    Rectangle operator --(int){
        length--;
        breadth--;
    }
};
int main(){
    Rectangle r(4,5);
    r.area();
    r++;
    r.area();
    r--;
    r.area();
    return 0;
}