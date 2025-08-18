#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
  cout<<"Hello DPCoding World "<<endl;
  cout<<"Welcome to this world "<<endl;



  ofstream out;
  out.open("Sample.txt");
  out<<"This is me  \n";
  out<<"This is me also ";
  out.close();

  ifstream in;
  string st;
  in.open("Sample.txt");
  // in>>st;
  // cout<<st;
  while(in.eof() == 0){
    getline(in , st);
    cout<<st<<endl;
  }



  in.close();

return 0;
}