#include<iostream>
using namespace std;
template<class T>
class num{
    private:
    T ans;
    public:
    num(T n):ans(n){
        cout<<"Inside constructor"<<endl;
    }
    T getnum(){
        return ans;
    }
};
int main(){
    num<int> num1(20);
    num<float> num2(20.25);
    cout<<"Integer number is: "<<num1.getnum()<<endl;
    cout<<"Decimal number is: "<<num2.getnum()<<endl;

}