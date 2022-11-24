//WAP that has class Distance with members – kms and meters. 
//Derive the classes School and Office 
//which store the distance from the house to school and office

#include<iostream>
using namespace std;
class Distance{
    protected:
    int km;
    int m;
};
class School:public Distance{
    public:
    void getdist(){
        cout<<"Enter the distance in km: ";
        cin>>km;
        cout<<"Enter the distance in m: ";
        cin>>m;
    }
    void showdist(){
        cout<<"Distance from house to school: "<<km<<"km, "<<m<<"m. ";
    }
};
class Office:public Distance{
    public:
    void getdist(){
        cout<<"Enter the distance in km: ";
        cin>>km;
        cout<<"Enter the distance in m: ";
        cin>>m;
    }
    void showdist(){
        cout<<"Distance from house to Office: "<<km<<"km, "<<m<<"m. ";
    }
};
int main(){
    School s;
    Office o;
    s.getdist();
    s.showdist();
    cout<<endl;
    o.getdist();
    o.showdist();
}