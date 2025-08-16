#include <iostream>
using namespace std;

int main()
{
  cout << "Hello Dpcoding World" << endl;
  cout << "Welcome to this World" << endl;

  // Basic Example
  int a = 4;
  int *ptr = &a;

  cout << "The value of a is " << *(ptr) << endl;

  // New Operator
  int *p = new int(40);
  cout << "The Value at address p is " << *(p) << endl;

  int *arr = new int[3];
  arr[0] = 10;
 *( arr+1)= 20;
  arr[2] = 30;
  delete[] arr;
  cout << "The value of arr[0] is " << arr[0] << endl;
  cout << "The value of arr[1] is " << arr[1] << endl;
  cout << "The value of arr[2] is " << arr[2] << endl;
  // Delete Operator

  arr[0]= 56;
  cout << "The value of arr[0] is " << arr[0] << endl;


  return 0;
}