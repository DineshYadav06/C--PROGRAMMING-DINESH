#include <iostream>
#include <string>
using namespace std;

class binary
{
  string s;

public:
  void read(void);
  void chk_bin(void);
  void ones_compliment(void);
  void display(void);
};

void binary::read(void)
{
  cout << "Please Enter your binary number: ";
  cin >> s;
}

void binary::chk_bin(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "Incorrect binary format!" << endl;
      exit(0);
    }
  }
}

void binary::ones_compliment(void)
{
  chk_bin(); // Ensuring it's a binary number before compliment
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary::display(void)
{
  cout << "Displaying binary number: ";
  for (int i = 0; i < s.length(); i++)
  {
    cout << s.at(i);
  }
  cout << endl;
}

int main()
{
  cout << "Welcome to the Binary World!" << endl;

  binary b;
  b.read();
  b.chk_bin();
  b.display();

  b.ones_compliment();
  cout << "After One's Complement: ";
  b.display();

  return 0;
}
