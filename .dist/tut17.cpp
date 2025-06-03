#include<iostream>

using namespace std;
inline int product(int a,int b){
  // Not recommended to use below lines with inline function

//  static int c =0;// this execute only once
//  int c = c+1;// Next time this function is run,the value of c will be retained
   
//   return a*b+c;
}

// int strlen(const char *p){

// }

//  function definition
float moneyReceived(int currentMoney, float factor = 1.04) {  
    return currentMoney * factor;  
}

int main(){
  cout << "Hello, World!" <<endl;
  cout << "Welcome to this world of C++!" << endl;
  // int a, b;
  // cout<<"Please Enter a and b: "<<endl;
  // cin >> a >> b;
  // cout<<"The Product of is :"<<product(a,b)<<endl;
  // cout<<"The Product of is :"<<product(a,b)<<endl;
  // cout<<"The Product of is :"<<product(a,b)<<endl;
  // cout<<"The Product of is :"<<product(a,b)<<endl;
  // cout<<"The Product of is :"<<product(a,b)<<endl;
  // cout<<"The Product of is :"<<product(a,b)<<endl;
  // cout<<"The Product of is :"<<product(a,b)<<endl;

  int money = 100000;
  cout<<"If you have "<<money<<" Rs in your Bank account , you will receive "<<moneyReceived(money)<<" after one year "<<endl<<endl;
  cout<<"For VIP: If you have "<<money<<" Rs in your Bank account, you will receive "<<moneyReceived(money, 1.10)<<" after one year "<<endl;

  return 0;
}
