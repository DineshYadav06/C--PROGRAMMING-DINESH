#include <iostream>
using namespace std;

struct employee {
    int eId;
    char favchar;
    float salary;
};

union money {
    int rice;
    int car;
    float pound;
};

int main() {
    cout << "Hello DPCoding" << endl;
    cout << "Welcome to this world" << endl;

    // Employee Details
    employee dinesh;
    dinesh.eId = 1;
    dinesh.favchar = 'c';
    dinesh.salary = 3223;

    employee aman;
    aman.eId = 23;
    aman.favchar = 'd';
    aman.salary = 293238928;


    enum Meal{breakfast, lunch,dinner};
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // // cout << "Id of Dinesh: " << dinesh.eId << endl;
    // // cout << "Char of Dinesh: " << dinesh.favchar << endl;
    // // cout << "Salary of Dinesh: " << dinesh.salary << endl;

    // // cout << "Id of Aman: " << aman.eId << endl;
    // // cout << "Char of Aman: " << aman.favchar << endl;
    // // cout << "Salary of Aman: " << aman.salary << endl << endl;

    // // Correct Union Usage
    // money m1;
    // m1.car = 986; // Assigning only one member at a time
    // cout << "The Value of rice in money: " << m1.car << endl;


    Meal m1 = lunch;
    cout<< m1<<endl;

    cout << "*****Thank You in this World*****" << endl;

    return 0;
}
