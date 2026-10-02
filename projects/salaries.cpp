#include <iostream>
using namespace std;

int main() {

    double basicsalary;


    cout << "Enter your basic salary: ";
    cin >> basicsalary;

    double oldhouse = (30.0 / 100) * basicsalary;
    double oldtransport = (10.0 / 100) * basicsalary;
    double oldmedical = (25.0 / 100) * basicsalary;

    double oldgrosssalary = basicsalary + oldhouse + oldtransport + oldmedical;
    double newhouse = (40.0 / 100) * basicsalary;
    double newtransport = (15.0 / 100) * basicsalary;
    double newmedical = (35.0 / 100) * basicsalary;

    double newgrosssalary = basicsalary + newhouse + newtransport + newmedical;

    double difference = newgrosssalary - oldgrosssalary;

    cout << "\n----- OLD SALARY DETAILS -----" << endl;
    cout << "House Allowance: " << oldhouse << endl;
    cout << "Transport Allowance: " << oldtransport << endl;
    cout << "Medical Allowance: " << oldmedical << endl;
    cout << "Old Gross Salary: " << oldgrosssalary << endl;
    cout << "----- NEW SALARY DETAILS -----" << endl;
    
    cout << "House Allowance: " << newhouse << endl;
    cout << "Transport Allowance: " << newtransport << endl;
    cout << "Medical Allowance: " << newmedical << endl;
    cout << "New Gross Salary: " << newgrosssalary << endl;

    cout << " Difference: " << difference << endl;

    return 0;
}
