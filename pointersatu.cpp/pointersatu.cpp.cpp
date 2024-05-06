// pointersatu.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs{ 1 }; //Obejct mhs
    mhs.showNim(); // member accest operator

    
}

