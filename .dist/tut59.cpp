#include<iostream>
#include <fstream>
using namespace std;


  


int main() {

  cout<<"Hello DPcoding  world"<<endl;
  cout<<" Welcome to this World "<<endl;


    fstream file;

    // Open file in both read and write mode
    file.open("example.txt", ios::out | ios::in);

    // Write data
    file << "C++ File Handling Example!" << endl;

    // Move pointer to beginning
    file.seekg(0);

    string line;
    // Read data
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}

  
