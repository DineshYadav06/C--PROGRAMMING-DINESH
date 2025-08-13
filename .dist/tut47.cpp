#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
  int a, b;
  public:
  void getDataSimple(){
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Now , Please the value of b"<<endl;
    cin>>b;
  }
    void performOperationSimple(){
      cout<<"The value of a + b is : "<<a + b<<endl;      
      cout<<"The value of a - b is : "<<a - b<<endl;      
      cout<<"The value of a * b is : "<<a * b<<endl;      
      cout<<"The value of a + b is : "<<a / b<<endl;      

        }

  
  };

  class ScientifiCalculator{
    int a, b;
    public:
    void getDataScientific(){
      cout<< "Enter the value of a "<<endl;
      cin>>a;
      cout<<"Now, Please Enter the value of b"<<endl;
      cin>>b;

    }



    void performOperationScientific(){
      cout<<"The value of cos(a + b) is : "<<cos(a + b)<<endl;      
      cout<<"The value of sin(b) is : "<<sin(b)<<endl;      
      cout<<"The value of exp(a) is : "<<exp(a)<<endl;      
      cout<<"The value of tan(a + b) is : "<<tan(a / b)<<endl;      

        }


  };

  class HybridCalculator : public SimpleCalculator,public ScientifiCalculator{

  };




int main(){
  cout<<"Hello DPCoding world"<<endl;
  cout<<"Welcome to this world "<<endl;
  // SimpleCalculator calc;
  // calc.getData();
  // calc.performOperationSimple();

  // ScientifiCalculator adv;
  // adv.getData();
  // adv.performOperationScientific();

  HybridCalculator calc;
  calc.getDataScientific();
  calc.performOperationScientific();
  



return 0;
}