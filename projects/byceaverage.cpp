#include <iostream>
using namespace std;
int main(){
float average1,distance,number,average2;

cout<<"Which Bike Model Do You Have,Enter Number:"<<endl<<"1:Honda Cd"<<endl<<"2:Honda 125"<<endl;
cin>>number;
cout<<"How much Distance you wnat to cover in km:";
cin>>distance;
average1=distance/50.2;
average2=distance/40.5;
if (number=1)
{cout<<"To cover"<<distance<<"KM"<<" of distance you need "<<average1<<" litre of petrol";}
else if (number=2)
{cout<<"To cover"<<distance<<"KM"<<" of distance you need "<<average2<<" litre of petrol";}


return 0;


}
