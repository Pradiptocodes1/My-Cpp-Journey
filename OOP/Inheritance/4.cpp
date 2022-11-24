//Area of Rectangle and triangle using hierarchial inheritance.
#include<iostream>
using namespace std;
class shape{
    protected:
    int a,b;
    public:
    void getdata(int x,int y){
        a=x; b=y;
    }
};
class rectangle:public shape{
    public:
    int arearect(){
        return a*b;
    }

};
class triangle:public shape{
    public:
    int areatriangle(){
        return 0.5*a*b;
    }

};
int main(){
    rectangle r; triangle t;
    int a1,b1;
    int c1,d1;
    cout<<"Enter the length and breadth of the rectangle: ";
    cin>>a1>>b1;
    r.getdata(a1,b1);
    int m=r.arearect();
    cout<<"Area of the rectangle: "<<m<<endl;
    cout<<"Enter the base and height of the triangle: ";
    cin>>c1>>d1;
    t.getdata(c1,d1);
    float n= t.areatriangle();
    cout<<"Area of the triangle: "<<n<<endl;
    return 0;

}