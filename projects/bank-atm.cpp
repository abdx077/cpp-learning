#include <iostream>
using namespace std;

int main()
{
    int number, pin,x2;

    cout << "Hi Welcome To UBL Bank"<<endl;

    cout << "Please Enter Your 5 Digit Pin To Login :";
    cin >> pin;

    while (pin != 78521)
    {
        cout << "You Have Entered Incorrect Pin, Please Enter Your Pin Again:";
        cin >> pin;
    }

    cout << "You Have Successfully Logged into Your Bank Account" << endl;

    cout << "What Do You Want Please Enter Corresponding Number:" << endl;
    cout << "1. Check Balance" << endl
         << "2. Deposit Money" << endl
         << "3. Withdraw Money" << endl
         << "4. Exit" << endl;

    cin >> number;

    while (number <= 0 || number > 4)
    {
        cout << "Please Enter Number Again In Range of 1 to 4:";
        cin >> number;
    }

    int initialbalance = 50000;
    int netbalance = 50000;
    int deposit = 0;
    int withdraw = 0;

    switch (number)
    {
        case 1:
            cout << "Your Current Account Balance Is :" << initialbalance;
            
            break;

        case 2:
            cout << "How Much Money Do You Want To Deposit:";
        
            cin >> deposit;
            cout<<"You Have Succeffuly Deposited:"<<deposit<<" of amount in account"<<endl;
            netbalance=initialbalance+deposit;
            cout<<"Your New Balance Is :"<<netbalance<<endl;
            break;

        case 3:
            cout << "How much money do you want to withdraw" << endl;
           
             cout  << "Your Current Balance Is:" << netbalance<<endl;
            cin >> withdraw;
    while ( withdraw>netbalance)
{
    cout<<"Insufficent Balance"<<endl;
    cout<<"Please Enter Another Amount:";
    cin>>withdraw;
}
netbalance=netbalance-withdraw;
cout<<"Your New Balance Is:"<< netbalance<<endl;
            break;

        case 4:
            cout << "Dear User You Have Successfully Logged Out";
            break;
    }
    cout<<"Do you want to use another service If Yes Please Enter 1 And For Exit Please Enter 4"<<endl;
    cin>>x2;
    if (x2==1)
{
   cout << "What Do You Want Please Enter Corresponding Number:" << endl;
    cout << "1. Check Balance" << endl
         << "2. Deposit Money" << endl
         << "3. Withdraw Money" << endl
         << "4. Exit" << endl;

    cin >> number;

    while (number <= 0 || number > 4)
    {
        cout << "Please Enter Number Again In Range of 1 to 4:";
        cin >> number;
    }

    switch (number)
    {
        case 1:
            cout << "Your Current Account Balance Is :" << initialbalance;
            
            break;

        case 2:
            cout << "How Much Money Do You Want To Deposit:";
        
            cin >> deposit;
            cout<<"You Have Succeffuly Deposited:"<<deposit<<" of amount in account"<<endl;
            netbalance=initialbalance+deposit;
            cout<<"Your New Balance Is :"<<netbalance<<endl;
            break;

        case 3:
            cout << "How much money do you want to withdraw" << endl;
           
             cout  << "Your Current Balance Is:" << netbalance<<endl;
            cin >> withdraw;
    while ( withdraw>netbalance)
{
    cout<<"Insufficent Balance"<<endl;
    cout<<"Please Enter Another Amount:";
    cin>>withdraw;
}
netbalance=netbalance-withdraw;
cout<<"Your New Balance Is:"<< netbalance<<endl;
            break;

        case 4:
            cout << "Dear User You Have Successfully Logged Out";
            break; 
}
}
else if (x2==4);
{cout<<"You have susseccfully logged out"<<endl<<"Thank You For Trusting Us ";
}
    return 0;
}
