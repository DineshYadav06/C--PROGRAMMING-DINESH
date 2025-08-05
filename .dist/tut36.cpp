#include<iostream>
using namespace std;


//Base class
class Employee{
  
  
  public:
  int id;
  float salary;
  Employee(){
    id = 1;
    salary = 34;
    
    }
    Employee(int inpid){
      id = inpid;
      salary = 34;
    }
    // ❌ Removed duplicate default constructor
    // Employee(){};
  

};

//Derived Class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base class-name}}

{
  class member/methods/etc...........
}


NOTE:>>>---
1. Default visibility mode is private
2. Private Visibility Mode : Public members of the base class becomes private member of the derived class
3.Private Member are never inherited
*/

// ✅ Changed visibility mode to public
class Programmer : public Employee{
  public:
  Programmer(int inpid){
    id = inpid;
  }
  
  int languagecode = 9;
  void getData(){
    cout<<id<<endl;

  }
  
};

 int main(){
  cout<<"Hello DpCoding World "<<endl;
  cout<<"Welcome to this World "<<endl;

  Employee dinesh(1),raj(2);
  cout<<dinesh.salary<<endl;
  cout<<raj.salary<<endl;
  Programmer skillf(13);
  cout<<skillf.languagecode<<endl;
  skillf.getData();



  return 0;
  
 }
