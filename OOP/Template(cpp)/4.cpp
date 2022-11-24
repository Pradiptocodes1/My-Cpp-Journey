#include<iostream>
using namespace std;
template <class T>
class size {
    public: 
    size(T c){
        cout<<c<<endl;
        cout<<sizeof(c)<<endl;
    }
};
int main(){
    size<int>a(12);
    size<float>b(69.69);
    size<char>c('H');
    return 0;
}

