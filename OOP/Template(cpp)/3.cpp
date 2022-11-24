#include<iostream>
using namespace std;
template <class T>
void display(T n){
    cout<<"Any diplay type overload: "<<n<<endl;
}
void display(int n){
    cout<<"Only integer type overload: "<<n<<endl;
}
int main(){
    display(25);
    display('P');
    display(25.25);

}