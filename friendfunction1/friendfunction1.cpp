// friendfunction1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa
{
private:
    string nama;

public:
    friend void setNama(mahasiswa& a, string);
};

int main()
{
    std::cout << "Hello World!\n";
}


