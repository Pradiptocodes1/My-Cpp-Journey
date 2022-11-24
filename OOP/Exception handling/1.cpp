#include<iostream>
using namespace std;
int division(int a,int b){
    if(b==0){
        throw "Division by zero !";
    }
    return a/b;
}
int main(){
    int x,y,ans;
    cout<<"Enter num1: ";
    cin>>x;
    cout<<"Enter num2: ";
    cin>>y;
    try{
        ans=division(x,y);
        cout<<"Answer is: "<<ans;
    }
    catch(const char *errormessage){
        cout<<errormessage<<endl;
    }
    return 0;
}