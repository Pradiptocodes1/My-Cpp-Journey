#include<iostream>
using namespace std;
template<class T>
void square(T n){
    cout<<"The square of the number is:"<<n*n<<endl;
}
int main(){
    int i;
    float j;
    char k;
    cout<<"Enter integer, float and character paramenters: ";
    cin>>i>>j>>k;
    square(i);
    square(j);
    square(k);

}