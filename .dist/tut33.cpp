#include<iostream>
using namespace std;

class BankDeposite {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite() {}
    BankDeposite(int p, int y, float r);
    void show();
};

BankDeposite :: BankDeposite(int p, int y,float r) {
    principal = p;
    years = y;
    interestRate = r / 100;
    returnValue = principal;

    for (int i = 0; i < years; i++) {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposite :: show() {
    cout << endl << "Principal amount was " << principal
         << endl << "Return Value after " << years << " years is " << returnValue << endl;
}

int main() {
    cout << "Hello DPCoding " << endl;
    cout << "Welcome to this world" << endl;

    BankDeposite bd1;
    int p, y;
    float r;

    cout << "Enter your Value of p, y and r " << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposite(p, y, r);
    bd1.show();

    return 0;
}
