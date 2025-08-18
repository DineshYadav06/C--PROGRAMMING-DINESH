#include <iostream>
#include <string>
using namespace std;

class CWH
{
protected:
  string title;
  float rating;

public:
  CWH(string s, float r)
  {
    title = s;
    rating = r;
  }

  virtual void display() {}
};

class CWHVideo : public CWH
{
  float videolength;

public:
  CWHVideo(string s, float r, float vl) : CWH(s, r)
  {
    videolength = vl;
  }

  void display()
  {
    cout << "🎥 This is an amazing video with title: " << title << endl;
    cout << "⭐ Ratings: " << rating << " out of 5 stars" << endl;
    cout << "⏱ Length of this video is: " << videolength << " minutes" << endl;
  }
};

class CWHText : public CWH
{
  int words;

public:
  CWHText(string s, float r, int wc) : CWH(s, r)
  {
    words = wc;
  }

  void display()
  {
    cout << "📖 This is an amazing text tutorial with title: " << title << endl;
    cout << "⭐ Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
    cout << "✍️ Length of this text is: " << words << " words" << endl;
  }
};

int main()
{
  cout << "Hello DPCoding World " << endl;
  cout << "Welcome to this World " << endl;

  string title;
  float rating, vlen;
  int words;

  // For Code with Harry video
  title = "Django Tutorial";
  vlen = 4.56;
  rating = 4.86;
  CWHVideo djVideo(title, rating, vlen);

  // For Code with Harry text
  title = "Django Tutorial Text";
  words = 433;
  rating = 4.19;
  CWHText djText(title, rating, words);

  // Pointers of base class
  CWH *tutorials[2];
  tutorials[0] = &djVideo;
  tutorials[1] = &djText;

  // Polymorphism
  tutorials[0]->display();
  tutorials[1]->display();

  return 0;
}



/*

Rule for virtual functions 
1. they can not be static 
2.they are acessed by object pointers;
3. Virtual function can be a friend of another class
4. A virtual function in base class might not be used.
5. If a virtual function is define in a base class , there is no necessity of redefinig itin the derived class.







*/