#include <iostream>
using namespace std;

template <class T>
class vector {
public:
    T* arr;
    int size;

    vector(int m) {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v) {
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main() {
    cout << "Hello DPCdoing world " << endl;
    cout << "Welcome to this world " << endl;

    vector<float> v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 45.1;
    v1.arr[2] = 24.9;

    vector<float> v2(3);
    v2.arr[0] = 1.3;
    v2.arr[1] = 0.66;
    v2.arr[2] = 1.8;

    float a = v1.dotProduct(v2);
    cout << "Dot Product = " << a << endl;

    return 0;
}
