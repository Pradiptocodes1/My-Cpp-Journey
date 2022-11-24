//Write a program to display integer and float array using template
#include<iostream>
using namespace std;
template<class T1, class T2>
class display{
public:
void show(T1 c,T2 d){
    cout<<c<<endl;
    cout<<d<<endl;
}
};
int main(){
    int i[]={1,2,3,4,5};
    float f[]={1.1,2.3,4.5,3.5,5.9};
    display<int,float>h;
    for(int a=0;a<5;a++){
        h.show(i[a],f[a]);
    }
    return 0;

}