#include<iostream>
using namespace std;

/*
student --> Test
student -->sports
test --> result
sports --> result
*/

class Student {
protected:
    int roll_no;
public:
    void set_number(int a) {
        roll_no = a;
    }
    void print_number(void) {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student {
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }

    void print_marks(void) {
        cout << "Your result is here:\n"
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void set_score(float sc) {
        score = sc;
    }
    void print_score(void) {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports {
private:
    float total;
public:
    void display(void) {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main() {
    cout << "Hello DPcoding world " << endl;
    cout << "Welcome to this World " << endl;

    Result dinesh;
    dinesh.set_number(478);
    dinesh.set_marks(90, 89);
    dinesh.set_score(9);
    dinesh.display();

    return 0;
}
