#include<iostream>
using namespace std;
template<class T>
void add(T a, T b){
    cout<<"Sum is: "<<a+b<<endl;
}
int main(){
    add<int>(5,5);
    add<float>(2.3,2.3);
}
