#include<iostream>
#include<iomanip> // Added for setw formatting

using namespace std;

int main() {
    cout << "Hello Dpcoding \n";
    cout << "Welcome to this world " << endl;

    // CONSTANTS IN C++
    // const int a = 65;
    // cout << "The value of a was : " << a << endl;
    // int a = 28; // Error: 'a' is constant and cannot be reassigned
    // cout << "The Value of a is : " << a << endl;

    // int a = 54, b = 36, c = 455;
    // cout << "The value of a without setw is : " << a << endl;
    // cout << "The value of b without setw is : " << b << endl;
    // cout << "The value of c without setw is : " << c << endl;

    // // Using setw to format output
    // cout << "The value of a is : " << setw(4) << a << endl;
    // cout << "The value of b is : " << setw(4) << b << endl;
    // cout << "The value of c is : " << setw(4) << c << endl;


    // Operator Precedence
    int a = 3, b= 4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
 
    return 0;
}
