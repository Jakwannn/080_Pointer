// pointer1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa

{
public:
    int nim;
    void showNIM() {
        cout << "Nomor Induk" << nim << endl;
    }
};

int main()
{
    mahasiswa mhs{ 1 }; // Object mhs
    mhs.showNIM(); //Member Access Operator
    
    mahasiswa& refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access operator
    mhs.showNIM();

    mahasiswa* pMhs = &mhs;
    pMhs->nim = 3;
    mhs.showNIM();
    return 0;
}

