#include <iostream>
#include <cmath>
using namespace std;

// SimpleCalculator class
class SimpleCalculator {
protected:
    double a, b;

public:
    void getSimpleInput() {
        cout << "Enter two numbers for simple calculations: ";
        cin >> a >> b;
    }

    void performSimpleOperations() {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division: Cannot divide by zero!" << endl;
    }
};

// ScientificCalculator class
class ScientificCalculator {
protected:
    double x, y;

public:
    void getScientificInput() {
        cout << "Enter two numbers for scientific calculations: ";
        cin >> x >> y;
    }

    void performScientificOperations() {
        cout << "Power (x^y): " << pow(x, y) << endl;
        cout << "Square root of x: " << sqrt(x) << endl;
        cout << "Logarithm of x: " << log(x) << endl;
        cout << "Sine of x (in radians): " << sin(x) << endl;
    }
};

// HybridCalculator class inheriting both
class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void displayAllResults() {
        getSimpleInput();
        performSimpleOperations();
        getScientificInput();
        performScientificOperations();
    }
};

// Main function
int main() {
    cout << "Hello DPCoding world" << endl;
    cout << "Welcome to this world" << endl;

    HybridCalculator calc;
    calc.displayAllResults();

    return 0;
}
