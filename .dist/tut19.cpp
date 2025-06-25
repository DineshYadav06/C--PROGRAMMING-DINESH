#include<iostream>
using namespace std;


int sum(int a , int b){
  cout<<"Using fuction with 2 argument"<<endl;
  return a + b;

}
int sum(int a , int b , int c){
  cout<<"Using fuction with 3 argument "<<endl;
  return a + b + c ;
}


// Calculatore the volume of  a cyclinder

int volume(double r ,int h )
{
  return (3.14* r * r  *h)
}
 //Calculate the Volume of cube
  int volume(int a){
    return a*a*a<<endl;
    
  }

  // Calculatore the  Trigonal box;
  int Volume(int l , int b  int h){
    return l* b * h<<endl;
  }


int main(){
  cout<<"Hello DPCoding "<<endl;
  cout<<"Welcome to this world "<<endl;
  cout<<"The sum of is 6 and 8 is "<<sum(6,8)<<endl;
  cout<<"The sum of is 9 , 3 and 5 is "<<sum(9,3,5)<<endl;
  cout<<"the volume cylinder  to the cubied is "<<volume( 4 , 5 , 8)<<endl;
  cout<<"the cube of threee side ;"<<emdl;

 


return 0; 
}