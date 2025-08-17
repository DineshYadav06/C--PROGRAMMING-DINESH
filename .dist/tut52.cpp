#include<iostream>
using namespace std;


class Shopitems{
  int id ;
  float price;
  public:
  void setData(int a, float b){
    id = a;
    price = b;

  }
  void getData(void){
    cout<<"code of this items is  "<<id<<endl;
    cout<<"Price of the this items is "<<price<<endl;


  }

};

int main(){
 
  cout<<"Hello DPCoding World  "<<endl;
  cout<<"Welcome to this World "<<endl;

  
   int size = 2;
   int p , q;

  // int *ptr  = &size;
  // int  *ptr = new int[34];
   
  // Genearal Store items
  // Veggies items
  // Hardware items

   Shopitems*ptr = new Shopitems[size];
   Shopitems *ptrTamp = ptr;
   for(int i = 0; i < size; i++){
    cout<<"Enter id and price of items "<< i +1 <<endl;
    cin>>p>>q;
    ptr-> setData(p,q);
    ptr++;

   }

   for(int  i = 0; i < size; i++ ){
    cout<<"Items number : "<<i+ 1<<endl;
    ptrTamp->getData();
    ptrTamp++;

   }

return 0;
}