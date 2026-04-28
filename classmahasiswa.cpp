#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    string nama;
    int nim;
    float nilai;

    void printdata()
    {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Nilai: " << nilai << endl;
    }

};

int main()
{ 
    Mahasiswa mhs; // deklarasi objek mhs dari kelas Mahasiswa

    mhs.nama = "ambon";
    mhs.nim = 12024;
    mhs.nilai = 85.5;

    mhs.printdata();
}