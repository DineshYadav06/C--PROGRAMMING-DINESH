#include <iostream>

class Shop
{

  int itemsId[100];
  int itemsPrice[100];
  int counter;

public:
  void intiCounter(void) { counter = 0; }
  void setPrice(void);
  void dispalyPrice(void);

}

void
Shop ::setPrice(void)
{
  cout << "Please Enter Id of your item no  " <<counter<< endl;
  cin << itemsId[counter];
  cout << "Now , Please Enter price of your items " << endl;
  cin << itemsPrice[counter];
  counter++;
}

void Shop ::dispalyPrice(void)
{
  for (int i = 0; i < counter; i++)
  {
    cout<<"The Price of items  with id "<<itemsId[i]<< "is  "<<itemsPrice[i]<<endl;
  }
}

int main()
{
  cout << "Hello dpcoding" << endl;
  cout << "Welcome to this world " << endl;



  Shop dukan;
  dukan.intiCounter();
  dukan.setPrice();
  dukan.setPrice();
  dukan.setPrice();
  dukan.dispalyPrice();
  return 0;
}