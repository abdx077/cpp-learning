#include <iostream>
using namespace std;
int main(){
    cout<<"-------Welcome to the Circle Calculator!----------"<<endl;
double pie,circumference,radius,area,radiussquare;
pie=3.14;
cout<<"Please Enter Radius In meters"<<endl;
cin>>radius;
radiussquare=radius*radius;
area=4*pie*radiussquare;
circumference=area*radius/3;
cout<<"Area Of Circle is :"<<area<<" m^2 "<<endl;
cout<<"Area O f Circumference is :"<<circumference<<" m ";

    return 0;
}
