#include <iostream>
#include <cmath>
using namespace std;

int main(){
cout<<"--------------------------------------------"<<endl;
cout<<"Hi Welcome to Power Calculator"<<endl;
cout<<"--------------------------------------------"<<endl;

int base,power;

cout<<"Please enter your base number"<<endl;
cin>>base;

cout<<"Please Enter Power"<<endl;
cin>>power;

cout<<"Power result ="<<  pow(base,  power)<<endl;

    return 0;
}
