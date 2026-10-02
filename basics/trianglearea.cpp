#include <iostream>
#include<math.h>
using namespace std;
int main(){
cout << "-------Welcome to the Triangle Area Calculator!-------" << endl;
double sideb,sidec,S,area,S1,S2,S3,Formula,sidea;
cout<<"Please Enter Length Of Side A:";
cin>>sidea;
cout<<"Please Enter Length Of Side B:";
cin>>sideb;
cout<<"Please Enter Length Of Side C:";
cin>>sidec;
S=(sidea+sideb+sidec)/2;
S1=S-sidea;
S2=S-sideb;
S3=S-sidec;
Formula=(S*S1*S2*S3);
cout<<"Area Of Triangle Is:"<<sqrt(Formula)<<"  m^2  ";















    return 0;
}
